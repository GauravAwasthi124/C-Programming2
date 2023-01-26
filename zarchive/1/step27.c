#include<stdio.h>

// Use of Do while loop
int main()
{
    int i = 0;
    do
    {
        if (i>10)
        {
            printf("The value of i is %d\n", i);
        }
        i++;
        
    } while (i<=20);
    
    return 0;
}