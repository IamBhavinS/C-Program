#include <stdio.h>
#include <string.h>

// 1. Define the Structure (Blueprint)
// A 'typedef' is used to allow us to refer to it simply as 'Student'
typedef struct {
    int id;
    char name[50];
    float gpa;
} Student;

// --- Function Definition ---
// 2. Function to return a 'Student' structure by value.
// It returns a copy of the local structure.
Student getTopStudent() {
    // Create a local structure variable
    Student topStudent;

    // Initialize the structure members
    topStudent.id = 101;
    
    // Use strcpy for strings, as arrays cannot be assigned directly
    strcpy(topStudent.name, "Alice Smith"); 
    
    topStudent.gpa = 3.95;

    // Return the structure (a copy is created and returned to the caller)
    return topStudent; 
}

// --- Main Program ---
int main() {
    // Call the function and assign the returned structure copy 
    // to a new local variable 'bestStudent'.
    Student bestStudent = getTopStudent();

    printf("--- Top Student Details ---\n");
    printf("ID: %d\n", bestStudent.id);
    printf("Name: %s\n", bestStudent.name);
    printf("GPA: %.2f\n", bestStudent.gpa);

    return 0;
}