#include <stdio.h>
#include <string.h>
#include <stdbool.h> // For using 'bool' type

// Define the Employee Structure
typedef struct {
    int id;
    char name[50];
    float salary;
} Employee;

// --- Method 1: Field-by-Field Comparison (Recommended) ---

/**
 * @brief Compares two Employee structures by checking each member individually.
 * This is the safest way, as it handles structure padding issues gracefully.
 *
 * @param empA The first employee structure.
 * @param empB The second employee structure.
 * @return true if all fields are identical (id, name, and salary).
 * @return false otherwise.
 */
bool compareStructsFieldByField(Employee empA, Employee empB) {
    // 1. Compare integer (ID)
    if (empA.id != empB.id) {
        return false;
    }

    // 2. Compare string (Name) using strcmp
    // strcmp returns 0 if strings are identical.
    if (strcmp(empA.name, empB.name) != 0) {
        return false;
    }
    
    // 3. Compare float (Salary)
    // Note: Due to floating-point precision issues, direct comparison 
    // might be risky in real-world apps, but for this simple example, it works.
    if (empA.salary != empB.salary) {
        return false;
    }

    // If all checks passed, the structures are logically identical
    return true;
}

// --- Method 2: Binary Comparison using memcmp (Use with Caution) ---

/**
 * @brief Compares two Employee structures by comparing their raw memory blocks.
 *
 * @warning This method can fail if the compiler adds uninitialized padding bytes
 * between structure members, even if the user-defined data is the same.
 *
 * @param empA Pointer to the first employee structure.
 * @param empB Pointer to the second employee structure.
 * @return true if the structures are byte-for-byte identical in memory.
 * @return false otherwise.
 */
bool compareStructsMemcmp(const Employee *empA, const Employee *empB) {
    // Compare the memory block starting at the address of empA and empB,
    // for a length equal to the size of the entire structure.
    return memcmp(empA, empB, sizeof(Employee)) == 0;
}


int main() {
    // --- Test Case 1: Identical Structures ---
    Employee e1 = {101, "Benjamin Kirk", 75500.00};
    Employee e2 = {101, "Benjamin Kirk", 75500.00};

    printf("--- Test 1: Identical Structures ---\n");
    if (compareStructsFieldByField(e1, e2)) {
        printf("Field-by-Field Check: Structures are identical.\n");
    } else {
        printf("Field-by-Field Check: Structures are different.\n");
    }
    
    if (compareStructsMemcmp(&e1, &e2)) {
        printf("memcmp Check: Structures are byte-for-byte identical (safe in this case).\n");
    } else {
        printf("memcmp Check: Structures are byte-for-byte different.\n");
    }

    // --- Test Case 2: Different Structures ---
    Employee e3 = {205, "Sarah Lee", 52000.00};
    Employee e4 = {206, "Sarah Lee", 52000.00}; // ID is different

    printf("\n--- Test 2: Different Structures ---\n");
    if (compareStructsFieldByField(e3, e4)) {
        printf("Field-by-Field Check: Structures are identical.\n");
    } else {
        printf("Field-by-Field Check: Structures are different (Correct).\n");
    }

    if (compareStructsMemcmp(&e3, &e4)) {
        printf("memcmp Check: Structures are byte-for-byte identical.\n");
    } else {
        printf("memcmp Check: Structures are byte-for-byte different (Correct).\n");
    }

    return 0;
}