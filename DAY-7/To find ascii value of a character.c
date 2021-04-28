#include<stdio.h>
#include<stdlib.h>
void main()
{
    char c,ch,flag=1;
    printf("Here we will be finding out ASCII value of characters\n");
    for(;;)
    {
        if(flag==1)
        {
            printf("Shall we start[Y/N]\n");
            scanf(" %c",&ch);
            switch(ch)
            {
                case 'Y':printf("Enter a character\n");
                        scanf(" %c",&c);
                        printf("The ASCII value of '%c' character is %d\n",c,c);
                        break;
                case 'y':printf("Enter a character\n");
                        scanf(" %c",&c);
                        printf("The ASCII value of '%c' character is %d\n",c,c);   
                        break;
                case 'N':exit(0);
                case 'n':exit(0);
            }
            flag=2;
        }
        else
        {
            printf("Do you want to continue?[Y/N]\n");
            scanf(" %c",&ch);
            switch(ch)
            {
                case 'Y':printf("Enter a character\n");
                        scanf(" %c",&c);
                        printf("The ASCII value of '%c' character is %d\n",c,c);
                        break;
                case 'y':printf("Enter a character\n");
                        scanf(" %c",&c);
                        printf("The ASCII value of '%c' character is %d\n",c,c);   
                        break;
                case 'N':exit(0);
                case 'n':exit(0);
            }
        }
    }
}
