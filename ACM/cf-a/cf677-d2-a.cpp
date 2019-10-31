#include <iostream>


int main()
{
    int n, h, p, res{0};
    std::cin >> n >> h;
    while (n--) {
        std::cin >> p;
        if (p > h)
            ++res;
        ++res;
    }
    std::cout << res << std::endl;
    return 0;
}
