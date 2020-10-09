/*
   For any given integer named n given as input, calculate S = 1 + 1/2 + 1 * 3 + 1/4 + 1 * 3 * 5 + 1/6 + 1 * 3 * 5 * 7 + 1/8... 
*/

#include <stdio.h>

int
main (void)
{
  // Get the input from user.
  unsigned int n;

  printf("Please provide an unsigned integer: ");
  scanf("%u", &n);

  unsigned int sum = 0;
  for (int i = 1; i <= n; i++)
  {
    if (i % 2 == 0) {
      sum += (1 / i);
    }
    else {
      int prod = 1;
      for (int j = 3; j <= i; j += 2)
	prod *= j;
      sum += prod;
    }	
  }

  printf("The sum is: %u\n", sum);
  return 0;
}
