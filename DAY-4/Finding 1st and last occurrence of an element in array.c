#include<stdio.h>

void main()
{
    int n,a[20],i,key;

    printf("Enter number of elements to the array\n");
    scanf("%d",&n);

    printf("Enter the array elements are \n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("The array elements are \n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }

    printf("Enter the key\n");
    scanf("%d",&key);

    for(i=0;i<n;i++)
    {
        if(key==a[i])
        {
            printf("Search successful\n");
            break;
        }
    }
    printf("%d's first occurence is at %d\n",key,i+1);

    for(i=n;i>0;i--)
    {
        if(key==a[i])
            break;
    }
    printf("%d's last occurence is at %d\n",key,i+1);
}
