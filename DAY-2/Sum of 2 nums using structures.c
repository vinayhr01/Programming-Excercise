#include<stdio.h>

struct addition
{
    int a,b,sum; // structure members declaration
}add; //structure variable

void main()
{
    printf("Enter a and b\n");
    scanf("%d%d",&(add.a),&(add.b)); //reading variables
    
    add.sum=add.a+add.b;
    printf("The sum is %d\n",add.sum);
}
