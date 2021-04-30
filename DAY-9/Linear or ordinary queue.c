#include<stdio.h>
#include<stdlib.h>
#define qsize 5

void insert(int q[],int item, int *r)
{
    if((*r)==qsize-1)
    {
        printf("Queue is full\n");
        return;
    }
    (*r)=(*r)+1;
    q[*r]=item;
}

void del(int q[], int *f,int *r)
{
    if(*f>*r)
    {
        printf("Queue is empty\n");
        return;
    }
    printf("The item deleted is %d\n",q[*f]);
    (*f)=(*f)+1;
}

void display(int q[],int f,int r)
{
    int i;
    if(f>r)
    {
        printf("Queue is empty\n");
        return;
    }
    for(i=f;i<=r;i++)
    {
        printf("%d\n",q[i]);
    }
}

int main()
{
    int f=0,r=-1,ch,q[qsize],item;

    for(;;)
    {
        printf("1)Insert\n2)Delete\n3)Display\n4)Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("Enter the element to insert\n");
                    scanf("%d",&item);
                    insert(q,item,&r);
                    break;

            case 2: del(q,&f,&r);
                    break;

            case 3: display(q,f,r);
                    break;

            default: exit(0);
        }
    }
}
