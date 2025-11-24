/*Q3: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
Sample Test Cases:
Input 1:
5 10
Output 1:
Area=50, Perimeter=30

Input 2:
3 7
Output 2:
Area=21, Perimeter=20

*/
#include <stdio.h>

int main() {
int length, width, area, perimeter;
printf("Enter length of rectangle: ");
scanf("%d", &length);
printf("Enter width of rectangle: ");
scanf("%d", &width);
area = length * width;
perimeter = 2 * (length + width);
printf("Area = %d\n", area);
printf("Perimeter = %d\n", perimeter);
return 0;
}
