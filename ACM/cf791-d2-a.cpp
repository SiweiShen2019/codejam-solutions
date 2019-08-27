#include <iostream>


int main()
{
  int a{0}, b{0}, n{0};
  std::cin >> a >> b;
  while (a <= b) {
    a *= 3;
    b *= 2;
    ++n;
  }
  std::cout << n << std::endl;
  return 0;
}
