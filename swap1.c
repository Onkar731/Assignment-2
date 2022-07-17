/* WAP to swap values of two int variables */

#include<stdio.h>
int main() {

    int num1 = 10, num2 = 30;
    int temp; // To avoid loss of value, temp variable is created.

    temp = num1; // 10 is stored in temp
    num1 = num2; // 30 is stored in num1
    num2 = temp; // 10 is stored in num2

    // Hence, swapping is done!

    printf("After swapping : \n");
    printf("num1 = %d  num2 = %d",num1,num2);

    return 0;
}