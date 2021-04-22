#include<stdio.h>

struct addition
{
    int a,b,sum; // structure members declaration
}add; //structure variable

void accept(int a,int b)
{
    printf("Enter a and b\n");
    scanf("%d%d",&(add.a),&(add.b)); //reading variables
}

void addition(int a, int b, int sum)
{
        add.sum=add.a+add.b;
}
    
void display(int a, int b, int sum)
{
        printf("The sum is %d\n",add.sum);
}
    
void main()
{
    accept(add.a,add.b);
    addition(add.a,add.b,add.sum);
    display(add.a,add.b,add.sum);
}
