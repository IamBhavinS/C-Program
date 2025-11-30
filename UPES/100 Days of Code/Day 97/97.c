#include <stdio.h>
#include <stdlib.h> // For exit()
#include <string.h> // For strcpy()

// Define the Employee Structure
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

#define FILENAME "employee_record.bin"

void write_data() {
    Employee emp1 = {101, "Alice Johnson", 65000.00};
    FILE *file_ptr;
    
    // Open file in binary write mode ("wb")
    // The "b" is crucial for binary operations.
    file_ptr = fopen(FILENAME, "wb");

    if (file_ptr == NULL) {
        perror("Error opening file for writing");
        exit(EXIT_FAILURE);
    }
    
    // Use fwrite() to write the entire structure block to the file
    // Syntax: fwrite(ptr, size, count, stream)
    size_t items_written = fwrite(&emp1,       // 1. Address of the structure to write
                                  sizeof(Employee), // 2. Size of the structure
                                  1,              // 3. Number of elements (1 struct)
                                  file_ptr);      // 4. File pointer

    if (items_written == 1) {
        printf("✅ Employee record successfully written to %s\n", FILENAME);
    } else {
        printf("❌ Error writing record to file.\n");
    }

    fclose(file_ptr);
}

void read_data() {
    Employee emp_read;
    FILE *file_ptr;
    
    // Open file in binary read mode ("rb")
    file_ptr = fopen(FILENAME, "rb");

    if (file_ptr == NULL) {
        perror("Error opening file for reading");
        exit(EXIT_FAILURE);
    }

    // Use fread() to read the entire structure block from the file
    // Syntax: fread(ptr, size, count, stream)
    size_t items_read = fread(&emp_read,      // 1. Address where the data will be stored
                              sizeof(Employee), // 2. Size of the structure
                              1,              // 3. Number of elements (1 struct)
                              file_ptr);      // 4. File pointer

    if (items_read == 1) {
        printf("\n--- Data Read from Binary File ---\n");
        printf("ID: %d\n", emp_read.id);
        printf("Name: %s\n", emp_read.name);
        printf("Salary: $%.2f\n", emp_read.salary);
    } else {
        printf("\n❌ Error reading record from file or file is empty.\n");
    }

    fclose(file_ptr);
}

int main() {
    // 1. Write the employee data to the binary file
    write_data();
    
    // 2. Read the employee data back from the binary file
    read_data();

    return 0;
}