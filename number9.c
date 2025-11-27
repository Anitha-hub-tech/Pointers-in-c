
//number nine
#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50};
    int *ptr = arr;
    int searchValue = 30;
    int found = 0;
    int i;
    for (i = 0; i < 5; i++) {
        if (*(ptr + i) == searchValue) {
            printf("Element %d found at index %d\n", searchValue, i);
            found = 1;
            break;
        }
    }
    if (!found) {
        printf("Element %d not found in the array.\n", searchValue);
    }
    return 0;
}
