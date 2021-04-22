#include<stdio.h>

void main()
{
    int num,j,i;
    
    printf("Enter a num\n");
    scanf("%d",&num);
    
    printf("Prime factors are\n");
    
    for(i=2;num>1;i++)
    {
        while(num%i==0)
        {
            printf("%d ",i);
            num=num/i;
        }
    }
}
