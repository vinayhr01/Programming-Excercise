#include<stdio.h>

struct book_stall{
    char book_id[20];
    char book_title[20];
    char author[20];
    float price;
};
typedef struct book_stall bs;

void main()
{
    bs a;
    printf("Enter book_id\n");
    scanf("%s",a.book_id);

    printf("Enter book_title\n");
    scanf("%s",a.book_title);

    printf("Enter author\n");
    scanf("%s",a.author);

    printf("Enter the price of the book is\n");
    scanf("%f",a.price);
}
