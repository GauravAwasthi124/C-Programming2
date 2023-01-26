#include<stdio.h>


int main()
{
    int age = 22;
    int * ptr = &age;
    int _age = *ptr;

    printf("%p\n", ptr);
    printf("%u\n", ptr);
    printf("%u\n", &age);
    printf("%d\n", ptr);

    printf("%d\n", _age);
    return 0;
}