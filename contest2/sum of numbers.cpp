#include <iostream>


int main() {

    int n;
    int s = 0;
    int sbig = 0;
    std::cin >> n;
    int a[100000] = {0};
    for (int i = 0; i < n; i++ ){
        std::cin >> a[i];
        s += a[i];
    }
    for (int i = 0; i < n; i++ ) {
        if (a[i] > s / n)
            sbig += a[i];
    }
    std::cout << sbig;
    return 0;
}

#include <iostream>
