#include<stdio.h>
struct book
{
    int bookid;
    float price;
    char title[20];
};
struct book input()
{
    struct book b;
    printf("Enter the boodid ,title , prices");
    scanf("%d  %f",&b.bookid,&b.price);
    gets(b.title);
    return b;
}
int main()
{
    struct book b1;
    b1 = input();
    display(b1);
    getch();
    return 0;
}