#include<stdio.h>
#include<string.h>

int main()
{
    char s[1000];
    int i,words=0;

    printf("Enter the string\n");
    gets(s);

    for(i=0;s[i];i++)
    {
        if(s[i]==32)
            words++;
    }
    if(i>0)
        words++;
    printf("Number of words in a string is %d\n",words);
}
