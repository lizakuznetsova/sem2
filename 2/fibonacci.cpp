#include <iostream>


long fib1(long n)
{
    long a = 1;
    long b = 1;
    long c;
    for (int i = 3;i <= n;i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    return b;
}

long fib2(long n)
{
    if (n < 3)
        return 1;
    else
    {
        long a;
        long b;
        long c;
        a = fib2(n - 1);
        b = fib2(n - 2);
        c = a + b;
        return c;
    }
}

long fibs[100000] = {0};

long fib3(long n) {
    if (n <= 1)
        return n;
    if (fibs[n] == 0)
        fibs[n] = fib3(n - 1) + fib3(n - 2);
    return fibs[n];
}

int main() {
    for (int i = 1; i < 100000; i++) {
        std::cout << fib3(i) << std::endl;
    }

    return 0;
}
