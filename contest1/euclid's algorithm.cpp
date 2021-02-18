
 #include <iostream>

int gcf(int a, int b) {
    while ((a != 0) && (b != 0)) {
        if (a > b)
            a = a % b;
        else
            b = b % a;
    }
    if (b == 0)
        return (a);
    else
        return (b);
}

int main() {
    int a, b;
    std::cin >> a >> b;
    std::cout << gcf(a,b);
    return 0;
}
