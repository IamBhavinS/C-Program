/*Create a Book structure containing book_id, title, author name and price.
Write a C program to pass a structure as a function argument and print the book details.*/ 

#include <stdio.h>
#include <string.h>

// unwanted input is gone
void clearInput() {
    int c;
    while ((c = getchar()) != '\n' && c != EOF) {}
}

typedef struct {
    int book_id;
    char title[100];
    char author[100];
    float price;
} Book;

void printBook(Book b) {
    printf("\n--- BOOK DETAILS ---\n");
    printf("Book ID   : %d\n", b.book_id);
    printf("Title     : %s\n", b.title);
    printf("Author    : %s\n", b.author);
    printf("Price     : %.2f\n", b.price);
}

int main() {
    Book b1;
    int choice;

    while (1) {
        printf("\n--- BOOK INFORMATION ENTRY ---\n");

        printf("Enter Book ID: ");
        if (scanf("%d", &b1.book_id) != 1) {
            printf("Invalid input.\n");
            clearInput();
            continue;
        }

        printf("Enter Title: ");
        clearInput();
        fgets(b1.title, sizeof(b1.title), stdin);
        b1.title[strcspn(b1.title, "\n")] = '\0';

        printf("Enter Author Name: ");
        fgets(b1.author, sizeof(b1.author), stdin);
        b1.author[strcspn(b1.author, "\n")] = '\0';

        printf("Enter Price: ");
        if (scanf("%f", &b1.price) != 1) {
            printf("Invalid input.\n");
            clearInput();
            continue;
        }

        printBook(b1);

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

