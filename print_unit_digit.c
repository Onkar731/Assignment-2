/* WAP to print unit digit of a given number */

#include<stdio.h>
int main() {

    int num;

    printf("Enter a number : ");
    scanf("%d",&num);
    printf("UNIT DIGIT : %d", num % 10);
/*  "%" this operator gives remainder of the division operation   */

    return 0;
}