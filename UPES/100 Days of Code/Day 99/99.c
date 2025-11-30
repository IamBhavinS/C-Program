#include <stdio.h>
#include <stdlib.h> // Required for malloc() and free()
#include <string.h> // Required for strcpy()

// Define the Employee Structure
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
    // 1. Declare a pointer to the Employee structure
    Employee *emp_ptr = NULL;

    // 2. Dynamically allocate memory for one Employee structure
    // sizeof(Employee) calculates the total bytes needed for the struct.
    // The result is cast to the appropriate pointer type (Employee*).
    emp_ptr = (Employee *)malloc(sizeof(Employee));

    // 

    // 3. Check if memory allocation was successful
    if (emp_ptr == NULL) {
        // If malloc fails, it returns NULL
        fprintf(stderr, "Error: Memory allocation failed!\n");
        return EXIT_FAILURE; // Return a non-zero value to indicate failure
    }

    printf("Memory successfully allocated for Employee structure.\n");

    // 4. Initialize the structure members using the arrow operator (->)
    // When using a pointer to a struct, you use '->' instead of '.'
    emp_ptr->id = 305;
    
    // Copy the string into the allocated memory
    strcpy(emp_ptr->name, "John Doe");
    
    emp_ptr->salary = 92500.50;

    // 5. Print the details from the dynamically allocated memory
    printf("\n--- Dynamically Allocated Employee Details ---\n");
    printf("ID: %d\n", emp_ptr->id);
    printf("Name: %s\n", emp_ptr->name);
    printf("Salary: $%.2f\n", emp_ptr->salary);

    // 6. Free the dynamically allocated memory
    // It is crucial to release the memory when you are done with it to prevent memory leaks.
    free(emp_ptr);
    emp_ptr = NULL; // Good practice: set the pointer to NULL after freeing

    printf("\nMemory successfully freed.\n");

    return EXIT_SUCCESS; // Return 0 to indicate success
}