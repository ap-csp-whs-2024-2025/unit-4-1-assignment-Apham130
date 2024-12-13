#include <iostream>
#include <string>

int main()
{
  //Exercise 1
  int x = 25;
  int y = 3;
  std::cout << (x+y) << " "<< (x-y) << " "<< (x*y) <<" " << (x/y) <<" " << (x%y) << " ";
  int z = 10;
  std::cout << (x>z) << " "<< (y<x) << "\n";

  //Exercise 2
  bool isSunny;
  bool hasUmbrella;
  isSunny = true;
  hasUmbrella = false;
  std::cout << (isSunny && hasUmbrella) << " " << (isSunny || hasUmbrella) << " " << (!isSunny) << " " << (!isSunny && !hasUmbrella)<< std::endl;

  //Exercise 3
  int n =7;
  double m = 4.0;
  bool hasLicense = false;

  std::cout << (n>m) << " " << (m == 4.0) << " " << ((hasLicense == true) && (m<=n)) << " " << ((n>5) && (hasLicense == false)) << std::endl;
  
  //Exercise 4
  std::string firstName;
  std::string lastName;

  std::cout << "What is your first name?" << "\n";
  std::cin >> firstName;
  std::cout << "What is your last name?" << "\n";
  std::cin >> lastName;

  double score = 85.75;

  std::cout << firstName << " " << lastName << ", your score is " << score << "." << "\n";

  //Exercise 6 (5)
  int age = 18;
  double height = 5.9;
  bool isStudent = true;
  std::string city = "New York";

  std::cout << (2024-18) << " " << (age >= 18) << " " << (height > 6) << " " << ((isStudent) && (city == "New York")) << "\n";

  //Bonus challenge
  int i = 50;
  double d = 100.5;
  bool flag = false;

  std::cout << ((i % 5 == 0) && (d > 50)) << " " << ((d<=100) || (flag == true));
  return 0;
}
