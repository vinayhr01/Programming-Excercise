#include<stdio.h>
#include<string.h>

void main()
{
    char s[100];
    int res,i,len,max=-1,f[256]={0};

    printf("Enter the string\n");
    gets(s);

    len=strlen(s);

    for(i=0;i<len;i++)
    {
        f[s[i]]++;
    }
    for(i=0;i<len;i++)
    {
        if(max<f[s[i]])
        {
            max=f[s[i]];
            res=s[i];
        }
    }
    printf("The maximum occurring character is %c\n",res);
}
