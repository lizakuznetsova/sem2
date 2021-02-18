#include <iostream>


int main() {

    int m, n, k;
    std::cin >> m >> n >> k;
    int **p;
    p = new int * [n];
    for (int i = 0; i < n; i++){
        p[i] = new int[m];
        for(int j = 0; j < m; j++){
            p[i][j] = 0;
        }
    }



    return 0;
}


