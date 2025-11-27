//number two
#include <stdio.h>
int main (){
int array[5] = {2, 3, 4, 5, 6};
int *ptr = array;
int i;
for(i = 0; i < 5; i++){
	printf("The elements are :%d\n", *(ptr+i));
}
}

