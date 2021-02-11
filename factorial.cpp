#include <iostream>

int fac(unsigned int n) {
    unsigned int f = 1;
    for (int i = 1; i < n+1; i++) {
        f = f * i;
    }
    return f;

}

int main() {
    unsigned int x;
    std::cin >> x;
    std::cout << fac(x)  ;
}