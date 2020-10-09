/*
  You are given an integer called p. p is "special" if there can exist another integer called q so that p = q + s(q),
       where s(q) is the sum of all digits of q.
  Example: -> input: 26
           -> output: yes,22
  
*/

#include <stdio.h>

int
main (void)
{
  int p;

  printf("p = ");
  scanf("%d", &p);

  int sum, aux;
  for (int q = p - 1; q > 0; q--)
  {
    sum = 0;
    aux = q;
    while (aux > 0)
    {
      sum += (aux % 10);
      aux /= 10;
    }
    if (sum + q == p) {
      printf("Yes, %d\n", q);
      return 0;
    }
  }

  printf("No\n");
  return 0;
}
