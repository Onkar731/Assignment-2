/* WAP to take the amount in INR and convert it into USD */
/* Assume price of 1 USD is INR 76.23 */

#include<stdio.h>
int main() {

    float amount_INR;
    double USD;

    printf("Enter amount in INR : ");
    scanf("%f",&amount_INR);

    USD = amount_INR/76.23;
    printf("%.2f INR is equal to %.2f USD",amount_INR,USD);
    return 0;
}