#include<stdio.h>


int main()
{
    char a = 'a';
    char *ptrr = &a;
    printf("Pointer:--%u\n",ptrr);
    ptrr++;
    printf("Pointer:--%u\n",ptrr); 
    return 0;
}