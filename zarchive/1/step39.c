#include<stdio.h>
// * ---> For Address in Pointers,
// & ---> For Value in Pointers, 
int main()
{
    int a = 22;
    int *ptr = &a;
    int *pptr = &ptr;

    printf("%p\n", &ptr);
    printf("%p\n", *ptr); 

    printf("%p\n", &pptr); 
    printf("%p\n", *pptr);
    return 0;
}