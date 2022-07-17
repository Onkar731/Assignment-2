/* WAP to make the last digit of a number stored in a variable as zero */

#include<stdio.h>
int main() {

    int num, last_digit;
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Before : %d",num);

    num /= 10; // Dividing by 10 we'll get qoutient value as an answer excluding one last digit
    num *= 10; // Multiplying num with 10, so that it can add 10 at the end
    
    printf("\nAfter : %d",num);
    return 0;
} 