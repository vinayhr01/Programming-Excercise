#include<stdio.h>

void main()
{
    int num,i,flag=0;
    
    printf("Enter the number\n");
    scanf("%d",&num);
    
    for(i=1;i<=num;i++)
    {
        /*if(i*(i+1)==num)
        {
            flag=1;
            break;
        }*/
        flag= i*(i+1)==num?1:-1;
        if(flag==1)
            break;
    }
    
    if(flag==1)
        printf("Pronic number\n");
    else
        printf("Not a pronic number\n");
}
