#include<stdio.h>

void main()
{
    int number,i;
    
    printf("Enter a number\n");
    scanf("%d",&number);
    
    printf("Factors of the number are\n");
    
    for(i=1;i<=number;++i)
    {
        if(number%i==0)
        {
            printf("%d ",i);
        }
    }
}
