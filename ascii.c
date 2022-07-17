/* WAP which takes a character as an input and displays its ASCII code */

#include<stdio.h>
int main() {

    char character;

    printf("Enter a character : ");
    scanf("%c", &character);
    
    printf("ASCII of \"%c\" is %d",character,character);
    return 0;
}