#include <iostream>
#include <iomanip>

void Bubble(int* a, int size)
{
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (a[j] > a[j + 1]) {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    std::cin >> n;
    int *a = new int[n];
    for (int i = 0; i < n; i++){
        std::cin >> a[i];
    }
    Bubble(a, n);
    std::cout << a[n/2];

    delete [] a;
    return 0;
}
