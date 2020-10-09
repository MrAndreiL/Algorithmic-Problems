/*
  You are given an integer called n. Print all Fibonacci sequence values smaller than or equal to n.
      Example: ->input:  10
               ->output: 0 1 1 2 3 5 8
*/

#include <stdio.h>

int
main (void)
{
  unsigned int n;

  printf("Please provide an unsigned integer as input: ");
  scanf("%u", &n);

  unsigned int f1, f2, aux;
  f2 = 0;
  f1 = 1;
  printf("0 ");
  
  while (f1 <= n)
  {
    printf("%u ", f1);

    aux = f1;
    f1 += f2;
    f2 = aux;
  }

  printf("\n");
  return 0;
}
