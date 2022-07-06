#include <stdio.h>
typedef struct node{
    int integer;
    struct node *link;
    }node;
node *head;
head=(node*)malloc(sizeof(node));
void Create_list(node *head)
{
    int n;
    printf("\n Enter the number of elements : ");
    scanf("%d",&n);
    printf("\n ");
    node *temp;
    for(int a=0;a<n;a++)
    {
        if(a==0)
        temp=head;
        else
        {
            temp->link=(node*)malloc(sizeof(node));
            temp=temp->link;
        }
        scanf("%d ",&temp->integer);
    }
    temp->link=NULL;
}
void Display_list(node *head)
{
    node *temp;
    temp=head;
    printf("\n The input list is :\n" );
    while(temp->link!=NULL)
    {
        printf("%d ",temp->integer);
        temp=temp->link;
    }
}
int Search_key(node *head,int n)
{
    int num=0;
    node *temp;
    temp=head;
    while(temp->link!=NULL)
    {
        if(temp->integer==n)
        num++;
    }
    return(num);
}
int main()
{
    int n;
    Create_list(&head);
    Display_list(&head);
    printf("\n Enter the specific element to be searched :");
    scanf("%d",&n);
    if(Search_key(&head,n)!=0)
    printf(" The '%d' element occurs %d times in the list.",n,Search_key(&head,n));
    else
    printf(" The requested element is not present in the list.");
    return 0;
}
