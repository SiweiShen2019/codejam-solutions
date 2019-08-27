#include <iostream>
#include <string>


int main()
{
  std::string s;
  int n, a{0}, d{0};
  std::cin >> n;
  std::cin >> s;
  for (int i = 0; i < n; ++i)
    if (s[i] == 'A') ++a; else ++d;
  if (a > d) {
    std::cout << "Anton" << std::endl;
  } else if (a < d) {
    std::cout << "Danik" << std::endl;
  } else {
    std::cout << "Friendship" << std::endl;
  }
  return 0;
}
