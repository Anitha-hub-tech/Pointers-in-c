
//number ten
#include <stdio.h>

void sort(int *arr, int size) {
    int i, j, temp;
    for (i = 0; i < size - 1; i++) {
        for (j = i + 1; j < size; j++) {
            if (*(arr + i) > *(arr + j)) {
                temp = *(arr + i);
                *(arr + i) = *(arr + j);
                *(arr + j) = temp;
            }
        }
    }
}

int main() {
    int arr[5] ;
    int j;
    printf("enter the 5 elements ");
    for ( j = 0 ; j < 5; j++){
    	scanf("%d",&arr[j]);
	}
    int i;
    sort(arr, 5);
    printf("Sorted array: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", *(arr + i));  
    }
    printf("\n");

    return 0;
}
