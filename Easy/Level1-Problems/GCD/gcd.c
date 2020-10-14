/*
  You are given a natural number called n. Print the greatest common divisor of the following n numbers without the use of any data structure.
       Exameple: input ->  4
                          12 36 60 102
                 output -> 6 
*/

#include <iostream>

int main (void)
{
  int n, x, y, r, aux;

  // Read n and the first element.
  std::cin >> n;
  std::cin >> x;

  while (n > 1)
  {
    std:: cin >> y;
    if (y > x) {
      aux = x;
      x = y;
      y = aux;
    }

    while (y > 0)
    {
      r = x % y;
      x = y;
      y = r;
    }
    n--;
  }

  std::cout << x << "\n";
  return 0;
}
