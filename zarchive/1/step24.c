#include<stdio.h>

int main()
{
    int a;
    printf("Enter the number:--");
    scanf("%d", &a);
    while (a >=1)
    {
        printf("%d\n",a);
        a--;
    }
    
    return 0;
}