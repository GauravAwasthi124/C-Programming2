#include<stdio.h>

int main()
{
    int x = 5,*p;
    p = &x;
    printf("%u\n",p);
    printf("%u\n",p+1);
    return 0;
}