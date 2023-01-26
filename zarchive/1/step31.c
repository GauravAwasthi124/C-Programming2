#include<stdio.h>


int main()
{
    int a;
    
    printf("Enter the a:-");
    scanf("%d", &a);
    int i = 1;
    do
    {
        printf("%d X %d = %d\n", a , i , a*i);
        i++;
    } while (i <=10);
    
    return 0;
}