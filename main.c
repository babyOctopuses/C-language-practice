#include <stdio.h>

int main(){
    double num1;
    double num2;
    printf("Enter first number: ");
    scanf("%lf", &num1); //we use lf when we are scanning for a number
    printf("Enter second number: ");
    scanf("%lf", &num2);
    printf("Your answer is %f ", num1+num2);
}