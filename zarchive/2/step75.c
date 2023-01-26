#include<stdio.h>
#include<string.h>


int main()
{
    int size=5;
    int alpha=65;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size-i-j; j++)
        {
            printf(" ");
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            printf((char)(alpha + k));
        }
        printf("");
    }
    
    return 0;
}