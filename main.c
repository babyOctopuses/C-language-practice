#include <stdio.h>

void sayHi();

int main(){

    printf("Top \n");
    sayHi("\nmichael", 30);
    return 0;

}

void sayHi(char name[], int age){
    printf("Hello %s is %d years old", name, age);
}