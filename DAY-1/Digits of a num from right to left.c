#include <stdio.h>

void main()
{
    int number,digit;
    
    printf("Enter the number\n");
    scanf("%d",&number);
    
    printf("The digits are\n");
    while(number!=0)
    {
        digit=number%10;
        printf("%d\n",digit);
        number=number/10;
    }
}
