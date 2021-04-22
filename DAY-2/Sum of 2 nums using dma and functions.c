#include<stdio.h>
#include<stdlib.h>

void accept(int *a, int *b)
{
    printf("Enter a and b\n");
    scanf("%d%d",a,b); //reading variables
    
}

void add(int *a,int *b, int *sum)
{
    *sum=*a+*b;
}

void display(int *a,int *b, int *sum)
{
    printf("sum=%d\n",*sum);
}

void main()
{
    int *a,*b,*sum; //pointer variables declaration
    a=(int*)malloc(sizeof(int));
    b=(int*)malloc(sizeof(int));
    sum=(int*)malloc(sizeof(int));
    
    accept(a,b);
    add(a,b,sum);
    display(a,b,sum);
}
