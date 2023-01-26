#include<stdio.h>

struct date
{
    int d,m,y;
};
int main()
{
    struct date today ;
    // today.d=14;
    // today.m = 01;
    // today.y = 2023;
    scanf("%d %d %d\n",&today.d,&today.m,&today.y);
    printf("%d/%d/%d\n", today.d,today.m,today.y);
    return 0;
}