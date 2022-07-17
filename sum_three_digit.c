/* WAP to input a three-digit number and display the sum of the digits */

#include<stdio.h>
int main() {
    
    int num, sum;

    printf("Enter three digit number : ");
    scanf("%d", &num);  //123

    sum = num % 10;     //3 is stored in sum
    num /= 10;          // 123/10 = 12 is stored in num
    sum += num % 10;    // 12%10 = 2 is added with sum
    sum += num / 10;    // 12 / 10 = 1 is added with sum

    printf("Sum of digits is %d", sum); // printing sum 
    return 0;
}