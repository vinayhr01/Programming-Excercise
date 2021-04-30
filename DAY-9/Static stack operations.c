#include<stdio.h>
#include<stdlib.h>
#define size 5

void push(int a[],int *top, int ele)
{
    if((*top)== size-1)
    {
        printf("Stack overflows\n");
        return;
    }
    (*top)++;
    a[*top]=ele;
}

void pop(int a[],int *top)
{
    if((*top)==-1)
    {
        printf("Stack underflows\n");
        return;
    }
    printf("The element deleted is %d\n",a[*top]);
    (*top)--;
}

void display(int a[],int top) 
{
    int i;
    if(top==-1)
    {
        printf("Stack underflows\n");
        return;
    }
    for(i=0;i<=top;i++)
    {
        printf("%d\n",a[i]);
    }
}

int main()
{
    int a[size],ele;
    int i,top=-1,ch;

    for(;;)
    {
        printf("1)Push\n2)Pop\n3)Display\n4)Exit\n");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: printf("Enter the element to insert\n");
                    scanf("%d",&ele);
                    push(a,&top,ele);
                    break;

            case 2: pop(a,&top);
                    break;

            case 3: display(a,top);
                    break;

            default: exit(0);
        }
    }
}
