#include <iostream>
#include <cstdlib>
#include <ctime>

int rand_array(int n) {
    int *a = new int[n + 1];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 1000;
    }
    a[n] = -1;

    return a;
}

int max_array(int n) {
    int max;
    int *p;
    int *a = new int[n];
    p = a;

    std::cin >> *a;
    max = *a;
    ++a;

    while (a != p + n) {
        std::cin >> *a;
        if (*a > max)
            max = *a;
        ++a;
    }
    return max;
}

void print_array(int * a) {
    for (; *a != -1; ++a)
        std::cout << *a << ' ';

    ++a;

}

int main(){
    int n;
    std::cin >> n;
    std::cout << max_array(n);
    return 0;
}


