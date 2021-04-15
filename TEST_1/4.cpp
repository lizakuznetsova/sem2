#include <iostream>
#include <complex>

int main() {
    int n, m, t1, t2;
    std::cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    m = abs(a[1] - a[0]);
    t1 = 0;
    t2 = 1;
    for (int i = n - 1; i >= 0; i--) {
        for (int j = n - 1; j >= 0; j--) {
            if ((abs(a[i] - a[j]) != 0) && (abs(a[i] - a[j]) <= m)) {
                m = abs(a[i] - a[j]);
                t1 = i + 1;
                t2 = j + 1;
            }

        }
    }

    std::cout << t1 << ", "  << t2;

    delete[] a;
    return 0;
}


