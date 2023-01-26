#include<stdio.h>


int main()
{
    char alphabet;
    printf("Enter your Alphabet:--");
    scanf("%c", &alphabet);
    
    if (alphabet >=65 && alphabet <=90)
    {
        printf("The selected character is in Uppercase");
    }
    else
    {
        printf("The selected characrer is not in Uppercase");
    }
    
    
    return 0;
}