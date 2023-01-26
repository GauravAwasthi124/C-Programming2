#include<stdio.h>


int main()
{
    char alphabet;
    printf("Enter your Alphabet:--");
    scanf("%c", &alphabet);
    
    if (alphabet >=97 && alphabet <=122)
    {
        printf("The selected character is in Lowercase");
    }
    else
    {
        printf("The selected characrer is not in Lowercase");
    }
    
    
    return 0;
}