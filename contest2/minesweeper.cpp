#include <iostream>


int main() {

    int m, n, k;
    std::cin >> n >> m >> k;
    int **p;
    p = new int * [n];
    for (int i = 0; i < n; i++){
        p[i] = new int[m];
        for(int j = 0; j < m; j++){
            p[i][j] = 0;
        }
    }
    for (int j = 0; j < k; j++) {
        int x, y;
        std::cin >> x >> y;
        p[x - 1][y - 1] = -1;
        for (int k = -1; k < 2; k++) {
            for (int l = -1; l < 2; l++) {
                if ((0 <= (x - 1 + k)) and ((x - 1 + k) < n) and
                    (0 <= (y - 1 + l)) and ((y - 1 + l) < m)) {
                    if (p[x - 1 + k][y - 1 + l] != -1) {
                        p[x - 1 + k][y - 1 + l] += 1;
                    }
                }
            }
        }
    }
    for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                std::cout << p[i][j] << " ";
            }
            if (i == n - 1) continue;;
            std::cout << std::endl;
        }

    for (int i = 0; i < n; i++){
        delete[] p[i];
    }
    delete[] p;
    return 0;
}


