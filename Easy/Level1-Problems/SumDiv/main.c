/*
   Print the sum of the divisors of a given n. (Given by input through standar input).
   Example: input  -> 12
   			output -> 28
*/

#include <stdio.h>

static unsigned int SumDiv (unsigned int n)
{
	unsigned int sum = 0;
	size_t d = 1;

	while (d * d < n) {
		if (n % d == 0) 
			sum += (d + (n / d));
		d++;
	}  
	if (d * d == n)
		sum += d;

	return sum;
}

int main (void) 
{
	unsigned int n;

	scanf("%u", &n);

	printf("%u\n", SumDiv(n));

	return 0;
}