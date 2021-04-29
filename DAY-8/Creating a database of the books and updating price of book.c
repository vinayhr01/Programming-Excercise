#include<stdio.h>
#include<string.h>

struct book{
    char title[20];
    char author[20];
    float price;
    int pages;
};
typedef struct book b;

void read(b *p)
{
    printf("Enter title\n");
    scanf("%s",p->title);

    printf("Enter author\n");
    scanf("%s",p->author);

    printf("Enter pages\n");
    scanf("%d",&(p->pages));

    printf("Enter price\n");
    scanf("%f",&(p->price));

}

void print(b *p)
{
    printf("Title of the book is %s\n",p->title);
    printf("Author is %s\n",p->author);
    printf("Number of pages is %d\n",p->pages);
    printf("Price is %f\n",p->price);
}

void main()
{
    b bk[3];
    b *p;
    int i;
    for(i=1;i<3;i++)
    {
        p=&(bk[i]);
        read(p);
    }
    char title[10];
    float price;
    int flag=0;

    printf("Enter the title of book whose price has to be updated\n");
    scanf("%s",title);
    printf("Enter the price to update\n");
    scanf("%f",&price);
    for(i=1;i<3;i++)
    {
        if(strcmp(bk[i].title,title)==0)
        {
            bk[i].price=price;
            flag=1;
            break;
        }
    }
    if(flag==0)
        printf("Book not found!!!\n");
    printf("Books details are\n");

    for(i=1;i<3;i++)
    {
        if(bk[i].price==price)
        {
            p=&(bk[i]);
            print(p);
        }
    }
    printf("The details of books after updation is\n");
    for(i=1;i<3;i++)
    {
        p=&(bk[i]);
        print(p);
    }
}
