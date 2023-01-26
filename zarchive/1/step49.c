#include<stdio.h>


int main()
{
    int age = 22;
    int *ptr = &age;
    printf("Pointer:--%u\n",ptr);
    ptr++;
    printf("Pointer:--%u\n",ptr);

    
    return 0;
}