#include<stdio.h>

int accept(int a)
{
    printf("Enter number\n");
    scanf("%d",&a); //reading variables
    return a;
}

int add(int a, int b)
{
    return (a+b);
}

void display(int sum)
{
    printf("The sum is %d\n",sum);
}

void main()
{
    int a,b,sum; //variables declaration
    
    a=accept(a);
    b=accept(b);
    
    //printf("%d %d\n",a,b);
    
    sum=add(a,b);
    
    display(sum);
}
