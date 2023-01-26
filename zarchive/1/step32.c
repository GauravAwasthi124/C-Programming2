#include<stdio.h>


int main()
{
    int a;
    
    printf("Enter the a:-");
    scanf("%d", &a);
    int i = 10;
    while (i >=1)
    {
        printf("%d X %d = %d\n", a , i , i*a);
        i--;
    }
    
    
    return 0;
}