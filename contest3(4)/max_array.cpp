#include <iostream>



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

int main(){
    int n;
    std::cin >> n;
    std::cout << max_array(n);
    return 0;
}


