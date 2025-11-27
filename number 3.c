//number three
#include <stdio.h>
int main(){
int array[6]={78,2,3,40,51,43};
int myarray[5];
int *arrayptr = myarray;
int i;
for(i=0;i<5;i++){
	
*(arrayptr+i*2)  = array [i];
printf("the elements of the major array are :%d\n", *(arrayptr+i*2));
}  
}
