#include <iostream>
#include <algorithm>

int rand_array(int n) {
    int *a = new int[n + 1];
    for (int i = 0; i < n; i++) {
        a[i] = rand() % 1000;
    }
    a[n] = -1;

    return a;
}

int t = 2;

bool is_in_arrayc(int* a, int n, int x){
    while (*p != x):
        if x > * (a + n / 2){
            a =
        }
    for(int* p = a; p != a + n; ++p)
        if (*p == x)
            return true;
        return false;
}


int main(){
    stand(time(NULL));
    int* a = rand_array(10);
    int n = size_array(a);

    std::sort(a, a + n);


}