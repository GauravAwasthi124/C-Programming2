#include<stdio.h>
#include<string.h>


int main()
{
    char array[10] = {'i','n','d','i','a'};
    // gets(array);
    // puts(array);
    printf("%c\n", array[0]);
    printf("%c\n", array[1]);
    printf("%c\n", array[2]);
    printf("%c\n", array[3]);
    printf("%c\n", array[4]);
    printf("%c\n", array[5]);

    printf("%d\n", &array[0]);
    printf("%d\n", &array[0]+1);
    printf("%d\n", &array[0]+2);
    printf("%d\n", &array[0]+3);
    printf("%d\n", &array[0]+4);
    printf("%d\n", &array[0]+5);
    return 0;
}