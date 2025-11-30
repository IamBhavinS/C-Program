#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, i, j;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *arr = (int*)malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    printf("Enter elements: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *visited = (int*)calloc(n, sizeof(int));  // track counted elements
    if (visited == NULL) {
        printf("Memory allocation failed.\n");
        free(arr);
        return 1;
    }

    printf("\n");

    for (i = 0; i < n; i++) {
        if (visited[i] == 1)
            continue;

        int count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        printf("Element %d appears %d %s\n", arr[i], count, count == 1 ? "time" : "times");
    }

    free(arr);
    free(visited);
    return 0;
}
