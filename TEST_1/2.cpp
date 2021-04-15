#include <iostream>
#include <iomanip>



int sum(int n) {
    int s = 0;
    int *p;
    int *a = new int[n];
    p = a;


    while (a != p + n) {
        std::cin >> *a;
        s += *a;
        ++a;
    }

    return s;

}

int main(){
    int n;
    std::cin >> n;
    std::cout << std::fixed << std::setprecision(10);
    std::cout << float(sum(n) / n);


    return 0;
}
