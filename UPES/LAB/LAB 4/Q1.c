/*Write a C program that takes the three sides of a triangle as input from the user. 
First, check whether the triangle is valid or not. If the triangle is valid, 
then determine whether it is Equilateral, Isosceles, Right-angled, or Scalene.*/

#include <stdio.h>

int main() {
    float a, b, c;

//Asking user for Values
    printf("Enter the values of three sides of the Triangle: ");
    if(scanf("%f %f %f", &a, &b, &c) !=3 || a<0 || b<0 || c<0){
        printf("ERROR : Please enter a valid positive number\n");
    };   
//Checking if the Triangle is Valid
    if ((a + b > c) && (a + c > b) && (b + c > a)) {
        printf("The Triangle is VALID.\n");

//Checking what type of Triangle it is
        if (a == b && b == c) {
            printf("It is an EQUILATERAL Triangle.\n");
        }
        
        else if (a == b || b == c || a == c) {
            printf("It is an ISOSCELES Triangle.\n");
        }
       
        else if ((a * a == b * b + c * c) ||(b * b == a * a + c * c) || (c * c == a * a + b * b)) {
            printf("It is a RIGHT-ANGLED Triangle.\n");
        }
            
        else {
            printf("It is a SCALENE Triangle.\n");
        }
    }
    else {
        printf("The Triangle is NOT VALID.\n");
    }

    return 0;
}