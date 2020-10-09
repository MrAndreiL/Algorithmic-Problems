/*
   Given an input named n, please print to the standard output the reversed value of n.
      Example: -> input:  567
               -> output: 765
*/

#include <stdio.h>
#include <stdlib.h>

int
main (void)
{
  // Get the input from user through the stadard input.
  int n;

  printf("Please provide some integer input: ");
  scanf("%d", &n);

  // Reverse n.
  int reversed = 0;
  while (n > 0)
  {
    reversed = reversed * 10 + (n % 10);
    n /= 10;
  }

  printf("The reversed value is %d\n", reversed);
  
  return 0;
}




