/*
	You are given a natural number called n. Print all the prime divisors of n.
	Example: input  -> 12
			 output -> 2^2
			 		   3^1
*/

#include <stdio.h>

static void PrimeDivisors (unsigned int n)
{
	size_t d = 2;
	while (d * d <= n && n > 1) {
		if (n % d == 0) {
			size_t power = 0;
			while (n % d == 0) {
				power++;
				n /= d;
			}
			printf("%lu^%lu\n", d, power);
		}
		d++;
	}
	if (n > 1)
		printf("%u^1\n", n);
}

int main (void) 	
{
	unsigned int n;

	scanf("%u", &n);

	PrimeDivisors(n);

	return 0;
}