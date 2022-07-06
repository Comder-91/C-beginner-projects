#include <stdio.h>
#include <stdlib.h>
typedef struct node{char value;
                    struct node *link;}node;
node *front=NULL,*rear=NULL;
void Enqueue_ll(char c)
{
    if(rear==NULL)
    {
        rear=(node *)malloc(sizeof(node));
        front=rear;
    }
    else
    {
        rear->link=(node *)malloc(sizeof(node));
        rear=rear->link;
    }
    rear->value=c;
    rear->link=NULL;
}
char Dequeue_ll()
{
    if(front==NULL)
        printf("\n\n The queue is empty.");
    else
    {
        node *temp;
        temp=front;
        char value=front->value;
        front=front->link;
        free(temp);
        return value;
    }
}
void Print_queue_ll()
{
    if(front==NULL)
    printf("\n\n The queue is empty.");
    else
    {
        printf("\n\n Elements in queue: ");
        node *temp;
        temp=front;
        printf("%c",temp->value);
        while(temp->link!=NULL)
        {
            temp=temp->link;
            printf("->%c",temp->value);
        }
    }
}
int main()
{
    printf("\n Elements to insert: ");
    char c=NULL;
    while(c!='\n')
    {
        c=getchar();
        if(c=='0'||c=='1'||c=='2'||c=='3'||c=='4'||c=='5'||c=='6'||c=='7'||c=='8'||c=='9')
        Enqueue_ll(c);
    }
    Print_queue_ll();
    printf("\n\n Removed element = %c",Dequeue_ll());
    Print_queue_ll();
    return 0;
}
