#include<stdio.h>

int ana(char str1[],char str2[])
{
    int f[26]={0},s[26]={0},i=0;

    while(str1[i]!='\0')
    {
        f[str1[i]-'a']++;
        i++;
    }
    i=0;
    while(str2[i]!='\0')
    {
        s[str2[i]-'a']++;
        i++;
    }
    for(i=0;i<26;i++)
    {
        if(f[i]!=s[i])
            return 0;
    }
    return 1;
}

void main()
{
    char str1[100],str2[100];
    int flag;

    printf("Enter a string\n");
    gets(str1);
    printf("Enter another string\n");
    gets(str2);

    flag=ana(str1,str2);

    if(flag==1)
        printf("Strings are anagrams\n");
    else
        printf("Strings are not anagrams\n");
}
