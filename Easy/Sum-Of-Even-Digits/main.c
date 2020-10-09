/*
  Print the sum of all even digits of n.
  Example: 
         -> input: 2410365
	 -> output: 12
*/

#include <stdio.h>

int
main(void)
{
  // Take the input from standard input.
  int n;
  
  printf("Please provide a value for n:");
  scanf("%d", &n);

  // Loop over n and add every digit of n to sum
  int sum = 0;
  while (n > 0)
  {
    if ((n % 10) % 2 == 0)
      sum += n % 10;
    n /= 10;
  }

  // Print sum to the standard output.
  printf("The sum of n is: %d\n", sum);
  
  return 0;
}
