#include <stdio.h>
#include <stdlib.h>
int main()
{
    int n;
    printf("\n n=");
    scanf("%d",&n);
    struct node {int coloumn;
    int value;
    struct node *next;};
    typedef struct node node;
    node* row[n];
    printf("\n");
    for(int a=0;a<n;a++)
    {
        printf(" ");
        row[a]=(node *)malloc(sizeof(node));
        node *temp;
        temp=row[a];
        int b,d=0;
        scanf("\n%d",&b);
        if(b!=0)
        {
            temp->value=b;
            temp->coloumn=d;
            temp->next=(node *)malloc(sizeof(node));
            temp=temp->next;
        }
        d++;
        for(int c=1;c<n;c++)
        {
        int b;
        scanf(" %d",&b);
        if(b!=0)
        {
            temp->value=b;
            temp->coloumn=d;
            temp->next=(node *)malloc(sizeof(node));
            temp=temp->next;
        }
        d++;
        }
        temp->next=NULL;
    }
    for(int a=0;a<n;a++)
    {
        printf("\n Row%d: ",a+1);
        node *ptr;
        ptr=row[a];
        while(ptr->next!=NULL)
        {
            printf("(%d,%d)->",ptr->coloumn,ptr->value);
            ptr=ptr->next;
        }
        printf("END");

    }
return 0;
}
