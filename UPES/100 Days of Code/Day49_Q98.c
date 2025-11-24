/*Q98: Print initials of a name with the surname displayed in full.
Sample Test Cases:
Input 1:
John David Doe
Output 1:
J.D. Doe
*/
#include <stdio.h>

int main() {
    char name[100];
    int i = 0;

    printf("Enter a full name: ");
    fgets(name, sizeof(name), stdin);

    if (name[0] != ' ')
        printf("%c.", name[0]);

    while (name[i] != '\0') {
        if (name[i] == ' ' && name[i + 1] != '\0' && name[i + 1] != ' ') {

            int j = i + 1;
            int spaceFound = 0;

            while (name[j] != '\0') {
                if (name[j] == ' ') {
                    spaceFound = 1;
                    break;
                }
                j++;
            }

            if (spaceFound)
                printf("%c.", name[i + 1]);
            else {
               
                printf(" %s", &name[i + 1]);
                break;
            }
        }
        i++;
    }

    return 0;
}
