#include<stdio.h>


int main()
{
    
    float price[3] ;
    
    printf("Price of First Item:--");
    scanf("%f",&price[0]);
    printf("Total Amount of First Item with gst:--%.2f\n", price[0] + (price[0] * 0.18));

    printf("Price of Second Item:--");
    scanf("%f",&price[1]);
    printf("Total Amount of Second Item with gst:--%.2f\n", price[1] + (price[1] * 0.18));

    printf("Price of Third Item:--");
    scanf("%f",&price[2]);
    printf("Total Amount of Third Item with gst:--%.2f\n", price[2] + (price[2] * 0.18));

    float total_amount = price[0] + (price[0] * 0.18) + price[1] + (price[1] * 0.18) + price[2] + (price[2] * 0.18);
    printf("Total Amount with GST:--%.2f\n",total_amount);
    return 0;
}