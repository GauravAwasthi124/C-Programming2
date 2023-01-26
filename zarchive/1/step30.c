#include<stdio.h>
// Decrement Operator
int main()
{
    int a ;
    printf("Enter the a:--");
    scanf("%d", &a);

    for (int i = a; i >=1; i--)
    {
        if (i==5)
        {
            break;
        }
        
        
        printf("%d\n", i);
        
    }
    
    return 0;
}