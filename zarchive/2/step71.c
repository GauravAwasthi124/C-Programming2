#include <stdio.h>
#include <string.h>
#define PI 3.14
#define KMS_To_Miles 0.621371
#define INCH_To_Foot 0.083333
#define CM_to_Inch 2.57
#define Pound_to_Kg 0.453592
#define Inch_to_Meter 0.0254
// // void sum(float a,float b)
// // {
// //     printf("The sum of two numbers:--%.2f\n",a+b);

// // }
// // void sub(float a,float b)
// // {
// //     if(a>b)
// //     {
// //     printf("The subtraction of two numbers:--%.2f\n",a-b);
// //     }
// //     else
// //     {
// //         printf("The subtraction of two numbers:--%.2f\n",b-a);
// //     }

// // }
// // void multi(float a,float b)
// // {
// //     printf("The multiplication of two numbers:--%.2f\n",a*b);
// // }

// // void div(float a,float b)
// // {
// //     if(a>b)
// //     {
// //     printf("The divsion of two numbers:--%.2f\n",a/b);
// //     }
// //     else
// //     {
// //         printf("The division of two numbers:--%.2f\n",b/a);
// //     }

// // }

// void printstar(int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         printf("%c",'*');
//     }

// }

// int factorial(int number)
// {
//     if (number == 1 || number == 0)
//     {
//         return 1;
//     }
//     else
//     {
//         return number * factorial(number-1);
//     }
// }


int main()
    {
     
    // float i;
    // printf("Enter the number:--");
    // scanf("%f",&i);

    // printf("The %.2fkm = %.4fmiles\n",i,i*KMS_To_Miles);
    // printf("The %.2fin = %.4fmeter\n",i,i*Inch_to_Meter);
    // printf("The %.2fcm = %.4finch\n",i,i*CM_to_Inch);
    // printf("The %.2fpound = %.4fkg\n",i,i*Pound_to_Kg);
    // printf("The %.2finch = %.4fmeter\n",i,i*Inch_to_Meter);

    int array[3][3]={{1,2,5},{4,8,7},{4,5,8}};

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    
    // int num;
    // printf("Enter a no:--");
    // scanf("%d", &num);
    // printf("\n The factorial of %d is %d\n", num, factorial(num));
    // //     int n;
    //     printf("Enter the number:--");
    //     scanf("%d",&n);

    //     printstar(n);

    //     // float x,y;
    //     // printf("Enter the x:");
    //     // scanf("%f",&x);
    //     // printf("Enter the y:");
    //     // scanf("%f",&y);

    //     // sum(x,y);
    //     // sub(x,y);
    //     // multi(x,y);
    //     // div(x,y);
    //     // // int x;
    //     // printf("Enter the x:-");
    //     // scanf("%d",&x);
    //     // // for (int i = 1; i <=10; i++)
    //     // {
    //     //     printf("%d X %d = %d\n",x ,i,x*i);
    //     // }
    //     // int i =1;
    //     // do
    //     // {
    //     //     printf("%d X %d = %d\n",x ,i,x*i);
    //     //     i++;
    //     // } while (i <=10);
    //     // int i=1;
    //     // while (i<=10)
    //     // {
    //     //     printf("%d X %d = %d\n",x ,i,x*i);
    //     //     i++;
    //     // }

    //     // for (int i = 200; i >= 1; i--)
    //     // {
    //     //     printf("%d\n",i);
    //     // }

    //     // int i =5;
    //     // if (i == 3)
    //     // {
    //     //     printf("true");
    //     // }
    //     // else
    //     // {
    //     //     printf("false");
    //     // }

    //     // char days ;
    //     // printf("You can Choice the number between 1 to 7\n");
    //     // printf("Enter the days name:");
    //     // scanf("%i",&days);

    //     // switch (days)
    //     // {
    //     // case 1:
    //     //     printf("Today is sunday");
    //     //     break;
    //     // case 2:
    //     //     printf("Today is Monday");
    //     //     break;
    //     // case 3:
    //     //     printf("Today is Tuesday");
    //     //     break;
    //     // case 4:
    //     //     printf("Today is Wednesday");
    //     //     break;
    //     // case 5:
    //     //     printf("Today is Thursday");
    //     //     break;
    //     // case 6:
    //     //     printf("Today is Friday");
    //     //     break;
    //     // case 7:
    //     //     printf("Today is Saturday");
    //     //     break;
    //     // default:
    //     //     printf("Wrong number");
    //     //     break;
    //     // }

    //     // for (int i = 0; i <=10; i++)
    //     // {
    //     //     printf("%d\n",i);
    //     //     if (i == 1)
    //     //     {
    //     //         printf("india\n");
    //     //     }
    //     //     else if (i == 2)
    //     //     {
    //     //         printf("Austraila");
    //     //     }
    //     //     else if (i == 3)
    //     //     {
    //     //         printf("England");
    //     //     }
    //     //     else if (i == 4)
    //     //     {
    //     //         printf("South Africa");
    //     //     }
    //     //     else if (i == 5)
    //     //     {
    //     //         printf("New Zeland\n");
    //     //     }
    //     //     else if (i == 6)
    //     //     {
    //     //         printf("Ireland\n");
    //     //     }

    //     // }

    return 0;
}