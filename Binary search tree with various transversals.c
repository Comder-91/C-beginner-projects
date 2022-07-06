#include <stdio.h>
#include <stdlib.h>
typedef struct node{struct node *left;
                    int value;
                    struct node *right;}node;
node *root=NULL;
void Insert(int key)
{
    node *y=NULL,*x=root,*z;
    z=(node *)malloc(sizeof(node));
    z->value=key;
    z->left=NULL;
    z->right=NULL;
    while(x!=NULL)
    {
        y=x;
        if(z->value<x->value)
        x=x->left;
        else
        x=x->right;
    }
    if(y==NULL)
    root=z;
    else
    {
        if(z->value<y->value)
        y->left=z;
        else
        y->right=z;
    }
}
void Pre_order(node *key)
{
    if(key!=NULL)
    {
        printf("%d,",key->value);
        Pre_order(key->left);
        Pre_order(key->right);
    }
}
void In_order(node *key)
{
    if(key!=NULL)
    {
        In_order(key->left);
        printf("%d,",key->value);
        In_order(key->right);
    }
}
void Post_order(node *key)
{
    if(key!=NULL)
    {
        Post_order(key->left);
        Post_order(key->right);
        printf("%d,",key->value);
    }
}
int height(node *node)
{
    if (node == NULL)
        return 0;
    else {
        int lheight = height(node->left);
        int rheight = height(node->right);
        if (lheight > rheight)
            return (lheight + 1);
        else
            return (rheight + 1);
    }
}
void Print_level(node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d,", root->value);
    else if(level>1)
    {
        Print_level(root->left,level-1);
        Print_level(root->right,level-1);
    }
}
int main()
{
    int d=0;
    char c='0';
    printf("\n Enter the node values for the tree: ");
    while(c!='\n')
    {
        if(c==',')
        {
            Insert(d);
            d=0;
        }
        else
        d=(d*10)+(c-48);
        c=getchar();
    }
    Insert(d);
    printf("\n The pre-order transversal of the tree is: ");
    Pre_order(root);
    printf("\n");
    printf("\n The in-order transversal of the tree is: ");
    In_order(root);
    printf("\n");
    printf("\n The post-order transversal of the tree is: ");
    Post_order(root);
    printf("\n");
    printf("\n The level-order transversal of the tree is: ");
    for(int i=1;i<=height(root);i++)
    {
        Print_level(root,i);
    }
    printf("\n");
    return 0;
}
