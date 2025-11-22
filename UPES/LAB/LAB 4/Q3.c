//Write a program  to check if three points (x1,y1), (x2,y2) and (x3,y3) are collinear or not.
#include <stdio.h>

int main() {
    float x1, y1, x2, y2, x3, y3, area;

//Asking the user for the values of the coordinates
    printf("Enter coordinates of first point (x1,y1): ");
    if(scanf("%f %f", &x1, &y1)!=2 ){
        printf("ERROR : Please enter a valid number\n");
        return 0;
    };

    printf("Enter coordinates of second point (x2,y2): ");
     if(scanf("%f %f", &x2, &y2)!=2 ){
        printf("ERROR : Please enter a valid number\n");
        return 0;
    };


    printf("Enter coordinates of third point (x3,y3): "); 
     if(scanf("%f %f", &x3, &y3)!=2 ){
        printf("ERROR : Please enter a valid number\n");
        return 0;
    };


// Checking if the points are collinear or not 
    area = (x1*(y2-y3) + x2*(y3-y1) + x3*(y1-y2)) / 2.0;

    if (area == 0)
        printf("The points are Collinear.\n");
    else
        printf("The points are NOT Collinear.\n");

    return 0;
}
