#include <iostream>


int main() {
    int a;
    int f = 1;
    std::cin >> a;
    while ((a > 1) and (f == 1)) {
        if (a % 2 == 0)
            a /= 2;
        else
            f = 0;
    }
    if (f == 1)
        std::cout << "YES" << std::endl;
    if (f == 0)
        std::cout << "NO" << std::endl;
    return 0;
}
