//number seven
#include<stdio.h>
struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person1 = {"Alice", 25};
    struct Person *ptr = &person1;  

    
    printf("Before modification: Name = %s, Age = %d\n", ptr->name, ptr->age);
    
    
    ptr->age = 30;
    printf("After modification: Name = %s, Age = %d\n", ptr->name, ptr->age);

    return 0;
}
