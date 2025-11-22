/*Write a program to compute the BMI Index of the person and 
print the BMI values as per the following ranges. 
You can use the following formula to compute 
BMI= weight(kgs)/Height(Mts)*Height(Mts).*/

#include <stdio.h>

int main() {
    float w, h, bmi;
    printf("===>BMI CALCULATOR<===\n");
//Asking the User's Weight
    printf("Enter weight in kilograms: ");
    if (scanf("%f", &w) != 1 || w < 2 || w>700) {                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           
        printf("Invalid weight! Please enter a realistic positive number.\n");
    }
    
//Asking the User's Height
    printf("Enter height in meters: ");
    if (scanf("%f", &h) != 1 || h < 0.5 || h>2.7) {
        printf("Invalid height! Please enter a realisitic positive number.\n");
    }

//BMI Calculation 
    bmi = w/(h*h);
    printf("Your BMI is: %.2f\n", bmi);

    if (bmi < 15.0)
        printf("Category: Starvation\n");
    else if (bmi >= 15.1 && bmi <= 17.5)
        printf("Category: Anorexic\n");
    else if (bmi >= 17.6 && bmi <= 18.5)
        printf("Category: Underweight\n");
    else if (bmi >= 18.6 && bmi <= 24.9)
        printf("Category: Ideal\n");
    else if (bmi >= 25 && bmi <= 25.9)
        printf("Category: Overweight\n");
    else if (bmi >= 30 && bmi <= 39.9)
        printf("Category: Obese\n");
    else if (bmi >= 40.0)
        printf("Category: Morbidly Obese\n");
    else
        printf("Category: Not Defined\n");

    return 0;
}
