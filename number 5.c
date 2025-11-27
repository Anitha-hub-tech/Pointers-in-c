//number five
#include <stdio.h>
int main(){
    int sourceArray[5] = {10, 20, 38, 43, 51};
    int destinationArray[5];  
    int *sourcePtr = sourceArray;  
    int *destPtr = destinationArray;  
    int i;


    for (i = 0; i < 5; i++) {
        *(destPtr + i) = *(sourcePtr + i);  
    }

    printf("Elements of destinationArray after copy:\n");
    for (i = 0; i < 5; i++) {
        printf("destinationArray[%d] = %d\n", i, *(destPtr + i));
    }
}

