#include <iostream>
#include <complex>
int prn(int a) {
    int k = 0;
    for (int i = 1; i < int(sqrt(a) + 1); i++) {
        if (a % i == 0)
            k += 1;
    }
    if (k == 1)
        return 1;
    else
        return 0;
}

int main() {
    int a;
    std::cin >> a;
    int x = a;
    for (int i = 2; i < x / 2 + 1; i++ ) {
        if ((a % i == 0) && (prn(i) == 1)) {
            while (a % i == 0) {
                std::cout << i << std::endl;
                a = a / i;
            }
        }
    }
    return 0;
}
