#include <stdio.h>
#include <stdlib.h>
void Create_cirlist();
void Del_begn();
void Del_Last();
void Del_loc();
void Print_list();
    typedef struct node{
    char process;
    struct node *link;
    }node;
    node *head;
int main()
{
    head=(node *)malloc(sizeof(node));
    printf("\n Enter the process numbers = ");
    Create_cirlist(head);
    printf("\n Deletion from the beginning of the list.");
    Del_begn(head);
    printf("\n Deletion from the ending of the list.");
    Del_Last(head);
    int n;
    printf("\n Enter the location of the node to be deleted = ");
    scanf("%d",&n);
    Del_loc(n,head);
    return 0;
}
void Create_cirlist(node *head)
{
    node *temp;
    temp=head;
    while(1)
    {
        scanf(" %d[^!\n]",&temp->process);
        temp->link=(node *)malloc(sizeof(node));
        temp=temp->link;
    };
    temp->link=head;
    printf("\n The circular linked list is:");
    Print_list(head);
}
void Del_begn(node *head)
{
    while(head)
    {node *temp;
    temp=head;
    head=head->link;
    free(temp);}
    printf("\n The linked list is:");
    Print_list(head);
}
void Del_Last(node *head)
{
    while(head)
    {node *temp1,*temp2;
    temp1=head;
    while(temp1->link!=head)
    {
        temp2=temp1;
        temp1=temp1->link;
    }
    temp2->link=head;
    free(temp1);}
    printf("\n The linked list is:");
    Print_list(head);
}
void Del_loc(int n,node *head)
{
    while(head)
    {
        node *temp1,*temp2;
        temp1=head;
        for(int a=0;a<n-1;a++)
        {
            temp2=temp1;
            temp1=temp1->link;
        }
        temp2->link=temp1->link;
        free(temp1);
    }
    printf("\n The modified linked list is:");
    Print_list(head);
}
void Print_list(node *head)
{
    while(head)
    {
        node *temp;
        temp=head;
        printf("%d",temp->process);
        temp=temp->link;
        while(temp->link!=head)
        {
            printf("->%d",temp->process);
            temp=temp->link;
        }
    }
}

