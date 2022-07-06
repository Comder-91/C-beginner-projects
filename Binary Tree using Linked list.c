#include <stdio.h>
#include <stdlib.h>
typedef struct node{struct node *left;
                    int value;
                    struct node *right;
                    short int Th;}node;
int front=-1;
node *stack[50];
void Create_node(node *Node)
{
    printf("\n Enter the left child of node(%d): ",Node->value);
    char li=getchar();
    if(li=='\n')
        Node->left=NULL;
    else
    {
        int d=0;
        if(li=='-')
        {
            li=getchar();
            while(li!='\n')
            {
                d=(d*10)-(li-48);
                li=getchar();
            }
        }
        else
        {
            if(li=='+')
                li=getchar();
            while(li!='\n')
            {
                d=(d*10)+(li-48);
                li=getchar();
            }
        }
        Node->left=(node *)malloc(sizeof(node));
        Node->left->value=d;
        Create_node(Node->left);
    }
    printf("\n Enter the right child of node(%d): ",Node->value);
    char ri=getchar();
    if(ri=='\n')
        Node->right=NULL;
    else
    {
        int d=0;
        if(ri=='-')
        {
            ri=getchar();
            while(ri!='\n')
            {
                d=(d*10)-(ri-48);
                ri=getchar();
            }
        }
        else
        {
            if(ri=='+')
                ri=getchar();
            while(ri!='\n')
            {
                d=(d*10)+(ri-48);
                ri=getchar();
            }
        }
        Node->right=(node *)malloc(sizeof(node));
        Node->right->value=d;
        Create_node(Node->right);
    }
}
void Thread(node *Node)
{
    if(Node->left!=NULL)
    {
        Node->Th=0;
        front++;
        stack[front]=Node;
        Thread(Node->left);
    }
    else
        Node->Th=1;
    if(Node->right!=NULL)
        Thread(Node->right);
    else
    {
        if(front>=0)
        {
            Node->right=stack[front];
            front--;
        }
    }
}
void Print_Threaded_Tree(node *Node)
{
    if(Node->Th==0)
    {
        Node->Th=1;
        Print_Threaded_Tree(Node->left);
    }
    else if(Node->Th==1)
    {
        printf("%d ",Node->value);
        Print_Threaded_Tree(Node->right);
    }
}
int main()
{
    node *root=(node *)malloc(sizeof(node));
    printf("\n Enter the root value: ");
    scanf("%d",&root->value);
    char c=getchar();
    Create_node(root);
    Thread(root);
    printf("\n The inorder transversal of the given binary tree is: ");
    Print_Threaded_Tree(root);
    return 0;
}
