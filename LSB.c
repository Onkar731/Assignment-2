/* WAP to find the position of first 1 in LSB */

#include<stdio.h>
int main() {

    int num = 25, count = 0;

    // If the number is odd then 1 is on first position
    // Otherwise we have to shift bits.
    if(num & 1) {
        count++;
        printf("Position of the first 1 in LSB is %d", count);
    }
}