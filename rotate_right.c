/* WAP to take a three-digit number from the user and rotate its digits by one position towards the right */

#include<stdio.h>
int main() {
    
    int num, rem;

    printf("Enter a number : ");
    scanf("%d",&num);

    rem = num % 10; // Storing the last digit in rem variable
    num /= 10;      // Saving first two digits in num variable
    num = rem * 100 + num;  // Multiplying rem value with 100 and adding with it num and storing it in num.
    
    printf("Rotated Number : %d", num);

    return 0;
}