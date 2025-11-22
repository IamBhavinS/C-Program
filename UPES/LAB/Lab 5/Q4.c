/*The population of a town is 100000. The population has increased steadily at the rate of 10% per year for the last 10 years. 
Write a program to determine the population at the end of each year in the last decade*/

#include <stdio.h>

int main() {
    float population = 100000 ,rate = 10;             
    int years = 10;              

    printf("Population growth for the last 10 years (Rate =10%%)\n\n");
    
//Calculations
    for (int i = 1; i <= years; i++) {
        population = population + (population * rate / 100);
        printf("End of year %d -> Population = %.0f\n", i, population);
    }
    return 0;
}
