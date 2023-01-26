#include<stdio.h>
// Condition in c programming
int main()
{
    int num;
    printf("NOTE- This programm will work when user will select 1 to 7 digit, Thank You\n");
    printf("Enter the number:--");
    scanf("%d", &num);
    if (num == 1)
    {
        printf("Sunday");
    }
    else if (num == 2)
    {
        printf("Monday");
    }

    else if (num == 3)
    {
        printf("Tuesday");
    }
    
    else if (num == 4)
    {
        printf("Wednesday");
    }

    else if (num == 5)
    {
        printf("Thursday");
    }
    
    else if (num == 6)
    {
        printf("Friday");
    }
    
    else if (num == 7)
    {
        printf("Saturday");
    }
    
    else
    {
        printf("You choice wrong number");
    }
    
    return 0;
}