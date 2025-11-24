/*Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include <stdio.h>
int main() {
    FILE *file;
    char newLine[256];

    file = fopen("dataDay75.txt", "a");
    if (file == NULL) {
        printf("Error opening file.\n");
        return 1;
    }

    printf("Enter a new line of text to append: ");
    fgets(newLine, sizeof(newLine), stdin);

    fputs(newLine, file);

    fclose(file);

    printf("File updated successfully with appended text.\n");

    return 0;
}