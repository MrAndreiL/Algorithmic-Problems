/*
   You get an input n (natural number >= 2) followed by n floating point numbers. Find (first one) the longest subsequence of consecutive identical numbers.
   Print it's length and the index of it's first element.
   Example: 
           -> input:  17
	              2 3 3 4 1 7 7 7 4 8 8 5 5 5 2 2 9
	   -> output: 3 6
 */
#include <iostream>
#include <stdio.h>

int main (void)
{
   unsigned int n;
   std::cin >> n;

   unsigned int lungmax, lungindex, lung, index;
   float x, y;
   std::cin >> x;
   lungmax = lungindex = lung = index = 1;
  
   for (size_t i = 2; i <= n; i++) {
      std::cin >> y;
      if (y == x)
        lung++;
      else {
        if (lung > lungmax) {
	  lungmax   = lung;
	  lungindex = index; 
        }
        lung  = 1;
        index = i; 
      }
      x = y;
   }
   if (lung > lungmax) {
     lungmax   = lung;
     lungindex = index;
   }

   std::cout << lungmax << " " << lungindex << "\n";
   return 0;
}
