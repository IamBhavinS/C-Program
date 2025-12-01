#include <stdio.h>
#include <stdlib.h> 
#include <string.h> 


typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

int main() {
   
    Employee *emp_ptr = NULL;

   
    emp_ptr = (Employee *)malloc(sizeof(Employee));

 
    if (emp_ptr == NULL) {
        // If malloc fails, it returns NULL
        fprintf(stderr, "Error: Memory allocation failed!\n");
        return EXIT_FAILURE; // Return a non-zero value to indicate failure
    }

    printf("Memory successfully allocated for Employee structure.\n");

    emp_ptr->id = 305;
    
   
    strcpy(emp_ptr->name, "John Doe");
    
    emp_ptr->salary = 92500.50;

    
    printf("\n--- Dynamically Allocated Employee Details ---\n");
    printf("ID: %d\n", emp_ptr->id);
    printf("Name: %s\n", emp_ptr->name);
    printf("Salary: $%.2f\n", emp_ptr->salary);

  
    free(emp_ptr);
    emp_ptr = NULL; 

    printf("\nMemory successfully freed.\n");

    return EXIT_SUCCESS; // Return 0 to indicate success

}
