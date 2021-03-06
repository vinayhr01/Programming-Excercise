/*Number game  :: Input an element ( string, number etc) and if the input is a number 
then accept, if the input is "done" then stop  accepting, 
otherwise accept the next element and so on.
Use the ele,ent "done" to stop accepting input and return the largest
 and smallest element recieved 

Sample input pattern:- 111 345 hello  356 678 111 999 bye 165 done
output:- the smallest is 111 the largest is 999 

Hint:- Explore the usage of atoi function 
don use integer array !!!!!!*/

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void main()
{
    int val,max=0,min=9999;
    char s[20];

    printf("This program will return largest and smallest number from given inputs out of entered string,numbers,etc:-\n");
    printf("Enter a number or a string\n");
    printf("Enter 'done' to stop accepting\n");

    while(1)
    {
        scanf("%s",s);
        val=atoi(s);
        int k=strcmp(s,"done");

        if(k==0)
        {
            printf("The maximum is %d\n",max);
            printf("The minimum is %d\n",min);
            exit(0);
        }
        if(val==0)
        {
            continue;
        }
        else
        {
            if(val>max)
            {
                max=val;
            }
            if(val<min)
            {
                min=val;
                continue;
            }
        }
    }
}
