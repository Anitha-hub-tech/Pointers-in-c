
//number eight
#include <stdio.h>

int main() {
    int arr[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int *ptr = (int *)arr;  
    int i, j;

    printf("Elements of the 2D array are:\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d ", *(ptr + i * 3 + j));  
        }
        printf("\n");
    }

    return 0;
}
