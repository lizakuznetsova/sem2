#include <iostream>

int fact(int n) {
    if (n == 0)
        return 1;
    else
        return n * fact(n - 1);
}

int main() {
    int x;
    std::cin >> x;
    std::cout << fact(x);

    return 0;
}