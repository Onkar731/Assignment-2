/* WAP to swap values of two int variables without using a third variable*/

#include<stdio.h>
int main() {

    int num1 = 10, num2 = 30;

    num1 = num1 + num2; // 10 + 30 = 40 is stored in num1 
    num2 = num1 - num2; // 40 - 30 = 10 is stored in num2
    num1 = num1 - num2; // 40 = 10 = 30 is stored in num1

    // Hence, swapping is done!
    
    printf("After swapping : \n");
    printf("num1 = %d  num2 = %d",num1,num2);

    return 0;
}