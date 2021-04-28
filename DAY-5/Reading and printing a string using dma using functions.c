#include<stdio.h>
#include<stdlib.h>
char* allocate(char *a)
{
	a=(char *)malloc(sizeof(char));
	return a;

}
void input(char *a)
{
    printf("enter the name\n");
	scanf("%s",a);
}
void output(char *a)
{
    printf("the name is\n");
	printf("%s\n",a);
}


void main()
{
	char* a;
	a=allocate(a);
	input(a);
	output(a);
	free(a);
}
