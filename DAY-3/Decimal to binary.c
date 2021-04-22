#include<stdio.h>

void main()
{
    int dec,i=0,a[20],j;
    
    printf("Enter a decimal number\n");
    scanf("%d",&dec);
    
    while(dec>0)
    {
        a[i]=dec%2;
        dec=dec/2;
        i++;
    }
    
    for(j=i-1;j>=0;j--)
    {
        printf("%d ",a[j]);
    }
}
