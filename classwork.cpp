#include <iostream>
#include <string>

int main()
{
  //Exercise 1
  int x = 25;
  int y = 3;
  std::cout << (x+y) << "\n" << (x-y) << "\n" << (x*y) << "\n" << (x/y) << "\n" << (x%y) << "\n";
  int z = 10;
  std::cout << (x>z) << "\n" << (y<x) << "\n";

  //Exercise 2
  bool isSunny;
  bool hasUmbrella;
  isSunny = true;
  hasUmbrella = false;
  std::cout << (isSunny && hasUmbrella) << " " << (isSunny || hasUmbrella) << " " << (!isSunny) << " " << (!isSunny && !hasUmbrella);

  //Exercise 3
  return 0;
}
