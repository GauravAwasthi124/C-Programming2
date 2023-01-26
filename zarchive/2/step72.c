#include<stdio.h>
#include<string.h>

// int factorial(int number)
// {
//     if (number == 0 || number == 1  )
//     {
//         return 1;
//     }
//     else
//     {
//         return (number * factorial(number-1));
//     }
    
// }

int main()
{
    // int num;
    // printf("Enter the number:-");
    // scanf("%d",&num);
    // printf("the factorial of %d is %d\n",num,factorial(num));
    // int matrix[3][3]={{1,2,5},{4,1,2},{5,4,8}};
    // for (int i = 0; i <3; i++)
    // {
    //     for (int j = 0; j <3; j++)
    //     {
    //         printf("%d\t",matrix[i][j]);
    //     }
    //     printf("\n");
    // }
    // int marks[4];
    // marks[0]=65;
    // marks[1]=65;
    // marks[2]=65;
    // marks[3]=65;
    // printf("Mark of student4:-%d\n", marks[3]);
    // printf("Mark of student3:-%d\n", marks[2]);
    // printf("Mark of student2:-%d\n", marks[1]);
    // marks[2]=658;
    // printf("Mark of student2:-%d\n", marks[2]);

    // printf("Mark of student1:-%d\n", marks[0]);
    // int marks[4];
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("Enter the value of %d element of the array\n",i);   
    //     scanf("%d\n",&marks[i]);
    // }
    // for (int i = 0; i < 4; i++)
    // {
    //     printf("The value of %d is element of the array is %d\n",i,marks[i]);
         
    // }

    int array[2][4]={{5,8,7,4}
                    ,{5,4,8,7}};
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            //printf(" %d,%d --%d\n",i,j,array[i][j]);
            printf("%d\t",array[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}