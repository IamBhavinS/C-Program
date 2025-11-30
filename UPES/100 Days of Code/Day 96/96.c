#include <stdio.h>
#include <string.h>

// 1. Define the Nested Structure (Date)
// This structure holds the components of a date.
typedef struct {
    int day;
    int month;
    int year;
} Date;

// ---

// 2. Define the Outer Structure (Employee)
// It includes a member 'joiningDate' which is of type 'Date'.
typedef struct {
    int employeeId;
    char name[50];
    float salary;
    Date joiningDate; // This is the nested structure
} Employee;

// ---

int main() {
    // 3. Declare and Initialize an Employee Structure
    Employee emp1;

    // Basic Initialization
    emp1.employeeId = 1001;
    strcpy(emp1.name, "Benjamin Kirk");
    emp1.salary = 75500.00;

    // Initialization of the Nested Structure (Accessing the Date members)
    // We access the nested members using two dot operators:
    // structure_variable.nested_structure_member.final_member
    emp1.joiningDate.day = 15;
    emp1.joiningDate.month = 8;
    emp1.joiningDate.year = 2022;

    // 4. Print the Employee Details
    printf("--- Employee Details ---\n");
    printf("ID: %d\n", emp1.employeeId);
    printf("Name: %s\n", emp1.name);
    printf("Salary: $%.2f\n", emp1.salary);
    
    // Printing the Nested Date details
    printf("Joining Date: %d/%d/%d\n", 
           emp1.joiningDate.day, 
           emp1.joiningDate.month, 
           emp1.joiningDate.year);

    return 0;
}