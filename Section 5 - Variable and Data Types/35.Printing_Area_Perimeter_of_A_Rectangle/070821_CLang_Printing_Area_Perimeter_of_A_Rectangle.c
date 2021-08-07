/*
* Author: Rakuram
* Purpose: Printing area and perimeter of a rectangle
* Date: 07-08-2021
*/

#include<stdio.h>

int main()
{
    float rectWidth;
    float rectLength;
    float rectPerimeter = 0;
    float rectArea = 0;

    // printf("Enter the value of width and length of a Rectangle \n");
    scanf("%f", &rectLength);
    scanf("%f", &rectWidth);

    // Perimeter = 2*(length + width)
    rectPerimeter = (2 * (rectWidth + rectLength));
    printf("Perimeter of a Rectangle = %f\n", rectPerimeter);

    // Area = length * width
    rectArea = rectLength * rectWidth;
    printf("Area of a Rectangle = %f\n", rectArea);

    return 0;
}