/*
   Check if a given number is prime or not.
       Example: -> input: 7
                -> output: Yes
*/

#include <stdio.h>

int
main (void)
{ 
   // Get the input from the standard input.
   int n;

   printf("Please provide some valid integer: ");
   scanf("%d", &n);

   /*
     A number is prime if either:
       -> It is equal to 2 (the only prime and even number)
       -> Is an odd number that doesn't have any divisors besides 1 and itself.
   */

   if (n < 2) {
     printf("No\n");
     return 0;
   }

   if (n == 2) {
     printf("Yes\n");
     return 0;
   }

   if (n % 2 == 0) {
     printf("No\n");
     return 0;
   }

   for (int i = 3; i * i <= n; i += 2)
     if (n % i == 0) {
       printf("No\n");
       return 0;
     }

   printf("Yes\n");
   return 0;
} 
