/*Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include <stdio.h>

int main() {
    FILE *sourceFile, *destFile;
    char ch;

    char sourceFileName[100], destFileName[100];
    printf("Enter source file name: ");
    scanf("%s", sourceFileName);
    printf("Enter destination file name: ");
    scanf("%s", destFileName);

    sourceFile = fopen(sourceFileName, "r");
    if (sourceFile == NULL) {
        printf("Error opening source file.\n");
        return 1;
    }

    destFile = fopen(destFileName, "w");
    if (destFile == NULL) {
        printf("Error opening destination file.\n");
        fclose(sourceFile);
        return 1;
    }

    while ((ch = fgetc(sourceFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("File copied successfully to %s\n", destFileName);

    fclose(sourceFile);
    fclose(destFile);

    return 0;
}