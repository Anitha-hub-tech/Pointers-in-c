#include <stdio.h>
int main(){
	//number 1
int intvar = 12;
float floatvar = 3.1400;
char charvar = 'F';
int *intptr = &intvar;
float *floatptr = &floatvar;
char *charptr = &charvar;
printf("the value of the integer value :%d\n", *intptr);
printf("the value of the float value: %.2f\n", *floatptr);
printf("the value of the characters value :%c\n", *charptr);
return 0;
}



