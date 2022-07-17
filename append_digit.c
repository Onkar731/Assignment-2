/* WAP to input a number from the user and also input a digit, 
   Append a digit in the number and print the resulting number */

   #include<stdio.h>
   int main() {

       int num, digit;

       printf("Enter a number : ");
       scanf("%d",&num);
       printf("Enter a digit : ");
       scanf("%d",&digit);

       num = num * 10 + digit;  // first multiplying 10 with num then digit is added with num
       printf("Resulting Number is %d",num);
       return 0;
   }