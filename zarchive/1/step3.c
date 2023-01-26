#include<stdio.h>

int main()
{
    float radius , height;
    printf("Enter the radius of cylinder circle(cm):--");
    scanf("%fcm",&radius);

    printf("Enter the height of cylinder(cm):--");
    scanf("%fcm",&height);

    float area_of_circle = 3.14 * radius * radius;
    printf("The area of cylinder circle:%.2f square of cm\n", area_of_circle);

    float volume_of_cylinder = 3.14 * radius * radius * height;
    printf("The volume of cylinder is:%.2f cube of cm\n", volume_of_cylinder);

    return 0;
}