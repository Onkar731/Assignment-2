/* WAP to print size of an int, a float, a char and a double type variable */

#include<stdio.h>
int main() {

    int integer;
    float real;
    char character;
    double _double;

    printf("int : %d\nfloat : %d\nchar : %d\ndouble : %d", sizeof(integer), sizeof(real), sizeof(character), sizeof(_double));
    return 0;
}