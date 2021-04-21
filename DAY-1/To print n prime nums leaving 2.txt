#include<stdio.h>

void prime(int n)
{
    int i,j,flag;
    
    printf("Prime from 1 to %d are\n",n);
    
    for(i=1;i<=n;i++)
    {
        if(i==1 || i==0)
        continue;
        flag=1;
        for(j=2;j<=i/2;++j)
        {
            if(i%j==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        printf("%d\n",i);
    }
}

void main()
{
    int n;
    printf("Enter n\n");
    scanf("%d",&n);
    
    prime(n);
}
