#include <stdio.h>

void main()
{
    int number,digit,count=0,i,j,a[10];
    
    printf("Enter the number\n");
    scanf("%d",&number);
    
    while(number!=0)
    {
        digit=number%10;
        /*for(i=count;i<=count;i++)
        {
            printf("%d\n",digit);
        }*/
        count++;
        a[i]=digit;
        i++;
        number=number/10;
    }
    //printf("%d",count);
    
    printf("The even integers are\n");
    for(j=count-1;j>=0;j--)
    {
        if(a[j]%2==0)
        {
            printf("%d\n",a[j]);
        }
    }
    
    printf("The odd integers are\n");
    for(j=count-1;j>=0;j--)
    {
        if(a[j]%2!=0)
        {
            printf("%d\n",a[j]);
        }
    }
}
