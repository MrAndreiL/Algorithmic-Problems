/*
	You are given n, a natural number. Find out if n is palindrome or not.

	Example:
	input -> 121
	output -> Yes

	Explanation: 
	A number is palindrome if it is equal to it's reversed version.
*/

#include <stdio.h>

static int Palindrome (unsigned int n)
{
	// First, I will reverse the given number while conserving the original value.
	unsigned int temp = n;

	unsigned int reversed = 0;
	while (temp > 0) {
		reversed = reversed * 10 + (temp % 10);
		temp /= 10;
	}

	return reversed == n ? 1 : 0; 
}

int main (void) 
{
	unsigned int n;

	scanf("%u", &n);

	Palindrome(n) == 1 ? printf("Yes\n") : printf("No\n");

	return 0;
}