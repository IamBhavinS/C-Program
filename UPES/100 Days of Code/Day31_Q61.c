/*Q61: Search for an element in an array using linear search.

Sample Test Cases:
Input 1:
5
1 2 3 4 5
3
Output 1:
Found at index 2

Input 2:
4
10 20 30 40
25
Output 2:
-1

*/
#include <stdio.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int l,search;
    bool flag = "False";
    printf("Enter length of an array: ");
    scanf("%d",&l);
    int a[l];

    printf("Enter %d element in array: ",l);
    for(int i = 0;i<l;i++){
        scanf("%d",&a[i]);
    }

    printf("Enter Element to serach in an array: ");
    scanf("%d",&search);

    for(int i = 0;i<l;i++){
        if(search == a[i]){
            flag = "True";
            printf("%d is a index: %d\n",search ,i);
            break;
        }
    }

    if(flag)
        printf("%d\n",-1);
    return 0;
}
