#include<stdio.h>

void main()
{
    int sum=0,number,i;
    
    printf("Enter the number\n");
    scanf("%d",&number);
    
    while(sum!=1 && sum!=4)
    {
        sum=0;
        
        while(number>0)
        {
            i=number%10;
            sum+=(i*i);
            number/=10;
        }
        number=sum;
    }
    
    if(sum==1)
        printf("Happy number\n");
    else
        printf("Unhappy number\n");
}
