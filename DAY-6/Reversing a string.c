#include<stdio.h>
#include<string.h>

void main()
{
    char s[100],r[100];
    
    printf("Enter a string\n");
    gets(s);
    
    int begin,end,count=0;
    
    while(s[count]!='\0')
    {
        count++;
    }
    end=count-1;
    
    for(begin=0;begin<count;begin++)
    {
        r[begin]=s[end];
        end--;
    }
    r[begin]='\0';
    
    printf("The reversed string is %s\n",r);
}
