
#include <stdio.h>
#include <string.h>

// unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

typedef struct {
    char name[50];
    float basic;
    float gross;
} Employee;

int main() {
    Employee emp[100];
    int n, choice;

    while (1) {
        printf("\n--- MONTHLY PAY FOR EMPLOYEES ---\n");

        printf("How many employees you want to enter (max 100): ");
        if (scanf("%d", &n) != 1) {
            printf("Invalid input.\n");
            clearInput();
            continue;
        }

        if (n < 1 || n > 100) {
            printf("Max employees allowed is 100. Enter a value between 1 and 100.\n");
            clearInput();
            continue;
        }

        clearInput();

        for (int i = 0; i < n; i++) {
            printf("\nEmployee %d\n", i + 1);

            printf("Enter name: ");
            if (!fgets(emp[i].name, sizeof(emp[i].name), stdin)) {
                printf("Invalid input.\n");
                clearInput();
                i--;
                continue;
            }
            emp[i].name[strcspn(emp[i].name, "\n")] = '\0';

            printf("Enter basic pay: ");
            if (scanf("%f", &emp[i].basic) != 1) {
                printf("Invalid input.\n");
                clearInput();
                i--;
                continue;
            }

            clearInput();

            float da = 0.52f * emp[i].basic;
            emp[i].gross = emp[i].basic + da;
        }

        printf("\n--- EMPLOYEE GROSS SALARY LIST ---\n");
        for (int i = 0; i < n; i++) {
            printf("%d. %s  -->  %.2f\n", i + 1, emp[i].name, emp[i].gross);
        }

        // continue?
        printf("\n1. Run again\n2. Quit\nEnter choice: ");
        if (scanf("%d", &choice) != 1) {
            printf("Invalid choice, restarting.\n");
            clearInput();  
            continue;
        }

        if (choice == 2) {
            printf("Done.\n");
            break;
        }

        clearInput(); 
    }

    return 0;
}
