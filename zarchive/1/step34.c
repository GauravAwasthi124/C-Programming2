 #include<stdio.h>
 
 float Area_of_Rectangular(float a , float b)
 {
    return a * b;
 }
float Perimeter_of_Rectangular(float a , float b)
 {
    return a + b;
 }

 int main()
 {
    float x , y;
    printf("Enter the x:--");
    scanf("%f", &x);
    printf("Enter the y:--");
    scanf("%f", &y);

    float area = Area_of_Rectangular(x , y);
    printf("The area of Rectangular is:--%.2f\n", area);

    float perimeter = Perimeter_of_Rectangular(x , y);
    printf("The Perimeter of Rectangular is:-%.2f\n", perimeter);    
    return 0;
 }