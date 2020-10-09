/*
  Given a number n (unsigned integer), please calculate and print the sum S = 1! + 2! + .... + n! using a singe for statement.
     Exammple: -> input:  5!
               -> output: 153 
*/

#include <stdio.h>

int
main (void)
{
  // User input.
  int n;

  printf("Please provide a valid input: ");
  scanf("%d", &n);

  // Loop over n and calculate the sum.
  int sum = 0;
  int fact = 1;
  for (int i = 1; i <= n; i++)
  {
    fact *= i;
    sum += fact;
  }

  printf("The sum is: %d\n", sum);
  return 0;
}
