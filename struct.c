#include<stdio.h>
struct
{
    int bookprice;
    int bookid;
    int pages;

}st1;
int main()
{
    printf("enter bookprice, bookid, pages");
    scanf("%d %d %d",&st1.bookprice,&st1.bookid,&st1.pages);
    printf("book details");
    printf("bookprice:%d\n", st1.bookprice);
    printf("bookid :%d\n", st1.bookid);
    printf("book pages :%d\n",st1.pages);
    return 0;
}