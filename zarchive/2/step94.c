// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     int k = 25;
//     switch (k)
//     {
//     case 24:
//         printf("Rose\n");
//         break;
//     case 25:
//         printf("Jasmine");
//         break;
//     default:
//         printf("Flower");
//     }
//     printf("Garden");
//     return 0;
// }


// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     int n = 5457,sum = 1;
//     while (n>0)
//     {
//         sum = sum*(n % 10);
//         n = n/10;
//     }
//     printf("%d\n", sum);
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     int num = 5;
//     for (int i = 1; i <=10; i++)
//     {
//         printf("%d X %d = %d\n",num,i,num*i );
//     }
    
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     int num ,sum=0;
//     scanf("%d\n",&num);
//     for (int i = 1; i <=num; i++)
//     {
//             if (i % 2 != 0)
//             {
//                 sum = sum+i;
//             }
//     }
//                 printf("%d\n", sum);
     
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     int fir = 0,sec = 0,next = 1,n;
//     n = 25;
//     while(next <= n)
//     {
//         printf("%d\n", next);
//         fir = sec;
//         sec = next;
//         next = fir  + sec;
//     }
//         goto sos;
//     sos: printf("Jai shree ram");
//     return 0;
// }

// #include<stdio.h>
// #include<string.h>


// int main()
// {
//     int i = 99,j = 0;
//     for (; i++<100; i++)
//     {
//         j = 1;
//     }
//     printf("%d %d\n", i,j);
//     return 0;
// }

#include<stdio.h>

int main()
{
    int a[100],n,p =0,n =  0,z = 0;
    printf("Enter array");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d",a[i]);
        if (a[i]>0) 
        {
            p++;
        }
        else if (a[i]==0)
        {
            z++;
        }
        else
        {
            n++;
        }
        
    }
    return 0;
    
}