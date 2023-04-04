#include <stdio.h>

int main(){

    char color[20];
    char pluralNoun[20];
    char celebrityF[20];
    char celebrityL[20]; 

    printf("Enter a color: ");
    scanf("%s", color); // & is not needed because we want to take a string input
    printf("Enter a plural noun: ");
    scanf("%s", pluralNoun); // & is not needed because we want to take a string input
    printf("Enter a celebrity: ");
    scanf("%s%s", celebrityF, celebrityL); // & is not needed because we want to take a string input
    
    printf("Roses are %s\n", color);
    printf("%s are blue\n", pluralNoun);
    printf("I love %s %s\n", celebrityF, celebrityL);

    return 0;
}