/*
	Print all the 4 digit numbers that are both primes and palindromes without using any data structure.
*/

#include <stdio.h>

static int Prime (int n)
{
	if (n == 2)
		return 1;
	if (n < 2 || n % 2 == 0)
		return 0;
	for (size_t d = 3; d * d <= n; d += 2)
		if (n % d == 0)
			return 0;
	return 1;
}

static int Reversed (int n)
{
	int reversed = 0;
	while (n > 0) {
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}
	return reversed;
} 

int main (void) 
{
	for (int i = 1000; i <= 9999; i++)
		if (Prime(i) && Prime(Reversed(i)))
			printf("%d,", i);
	return 0;
}