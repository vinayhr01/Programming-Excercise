#include<stdio.h>
#include<stdlib.h>

void main()
{
    int *a,*b,*sum; // pointer variables declaration
    a=(int*)malloc(sizeof(int));
    b=(int*)malloc(sizeof(int));
    sum=(int*)malloc(sizeof(int));
    
    printf("Enter a and b\n");
    scanf("%d%d",a,b); //reading variables
    
    *sum=*a+*b;
    
    printf("sum=%d\n",*sum);
}
