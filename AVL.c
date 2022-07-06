#include<stdio.h>
#include<stdlib.h>
typedef struct node{
                    long key;
                    long occ;
                    struct node *left,*right;
                   }node;
long Height(node *root)
{
    if(root==NULL)
        return 0;
    else
    {
        long lh=Height(root->left),rh=Height(root->right);
        if(lh>=rh)
            return lh+1;
        else
            return rh+1;
    }
}
void Right_rotate(node **root)
{
    node *temp=*root;
    *root=temp->left;
    temp->left=(*root)->right;
    (*root)->right=temp;
}
void Left_rotate(node **root)
{
    node *temp=*root;
    *root=temp->right;
    temp->right=(*root)->left;
    (*root)->left=temp;
}
node *Insert(node *root,long data)
{
    node *x=root;
    if(root->key==-1)
    {
        root->key=data;
        root->occ=1;
    }
    else if(root->key==data)
        root->occ++;
    else if(root->key>data)
    {
        if(root->left==NULL)
        {
            root->left=(node *)malloc(sizeof(node));
            root->left->key=-1;
            root->left->occ=0;
            root->left->left=NULL;
            root->left->right=NULL;
        }
        x=Insert(root->left,data);
    }
    else if(root->key<data)
    {
        if(root->right==NULL)
        {
            root->right=(node *)malloc(sizeof(node));
            root->right->key=-1;
            root->right->occ=0;
            root->right->left=NULL;
            root->right->right=NULL;
        }
        x=Insert(root->right,data);
    }
    long bf=Height(root->left)-Height(root->right);
    if(bf>1)
    {
        if(root->left->left->left!=NULL)
            Right_rotate(&(root->left));
        else
        {
            Left_rotate(&(root->left));
            Right_rotate(&(root->left));
        }
    }
    else if(bf<-1)
    {
        if(root->right->right->right!=NULL)
            Left_rotate(&(root->right));
        else
        {
            Right_rotate(&(root->right));
            Left_rotate(&(root->right));
        }
    }
    return x;
}
void r_to_l(node *root)
{
    r_to_l(root->right);
    if(root->occ>1)
        printf("%ld ",root->key);
    r_to_l(root->left);
}
void l_to_r(node *root)
{
    l_to_r(root->left);
    printf("%ld ",root->key);
    l_to_r(root->right);
}
int main()
{
    long t;
    scanf("%ld",&t);
    for(long b=0;b<t;b++)
    {
        node *root=(node *)malloc(sizeof(node));
        long n;
        scanf("\n%ld",&n);
        short overflow=0;
        for(long a=0;a<n;a++)
        {
            long temp;
            scanf("%*c%ld",&temp);
            node *x=Insert(root,temp);
            if(x->occ>2)
            {
                overflow=1;
                break;
            }
        }
        if(overflow==1)
            printf("-1\n");
        else
        {
            r_to_l(root);
            l_to_r(root);
            printf("\n");
        }
    }
    return 0;
}
