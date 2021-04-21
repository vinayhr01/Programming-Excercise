#include<stdio.h>

void main()
{
    int n,flag=0,i;
    
    printf("Enter the number\n");
    scanf("%d",&n);
    
    for(i=2;i<=n/2;++i)
    {
        if(n%i==0)
        {
            flag=1;
            break;
        }
    }
    if(n==1)
    {
        printf("1 is neither odd nor even\n");
    }
    else
    {
        if(flag==0)
            printf("%d is prime",n);
        else
            printf("%d is not prime",n);
    }
}
