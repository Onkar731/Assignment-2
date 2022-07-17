/* WAP to print a given number without its last digit */

#include<stdio.h>
int main() {

    int num;
    
    printf("Enter a number : ");
    scanf("%d",&num);
    printf("Number without last digit : %d", num / 10 ); 
/*   "/" this operator gives quotient of the division operation   */

    return 0;
}