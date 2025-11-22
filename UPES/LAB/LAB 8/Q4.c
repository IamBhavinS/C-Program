#include <stdio.h>
#include <string.h>

// unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

union Address {
    char home_address[200];
    char hostel_address[200];
};

int main() {
    union Address a;
    char name[100];
    int choice, opt;

    while (1) {
        printf("\n--- PRESENT ADDRESS PROGRAM (USING UNION) ---\n");

        // read name normally (NO clearInput here)
        printf("Enter your name: ");
        fgets(name, sizeof(name), stdin);
        name[strcspn(name, "\n")] = '\0';

        printf("\nSelect address type:\n");
        printf("1. Home Address\n");
        printf("2. Hostel Address\n");
        printf("Enter choice: ");

        if (scanf("%d", &opt) != 1) {
            printf("Invalid input.\n");
            clearInput();
            continue;
        }

        if (opt == 1) {
            printf("Enter Home Address: ");
            clearInput();
            fgets(a.home_address, sizeof(a.home_address), stdin);
            a.home_address[strcspn(a.home_address, "\n")] = '\0';

            printf("\n--- PRESENT ADDRESS ---\n");
            printf("Name : %s\n", name);
            printf("Home Address : %s\n", a.home_address);
        }
        else if (opt == 2) {
            printf("Enter Hostel Address: ");
            clearInput();
            fgets(a.hostel_address, sizeof(a.hostel_address), stdin);
            a.hostel_address[strcspn(a.hostel_address, "\n")] = '\0';

            printf("\n--- PRESENT ADDRESS ---\n");
            printf("Name : %s\n", name);
            printf("Hostel Address : %s\n", a.hostel_address);
        }
        else {
            printf("Invalid option.\n");
            clearInput();
            continue;
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

