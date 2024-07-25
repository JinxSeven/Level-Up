#include <iostream>
#include <iomanip>

#define TAB '\t';

int main() {
    int m, n, o = 1;
    std::cin >> m >> n;
    int arr[m][n];
    for (int i {0}; i < m; ++i) {
        for (int j {0}; j < n; ++j) {
            arr[i][j] = o;
            o++;
        }
    }

    int lft = 0, ryt = n, top = 0, btm = m;
    while (lft < ryt || top < btm ) {
        for (int i = lft; i < ryt; i++) {
            std::cout << arr[top][i] << TAB;
        }
        top++;
        for (int i = top; i < btm; i++) {
            std::cout << arr[i][ryt - 1] << TAB;
        }
        ryt--;
        //std::cout << btm - 1;
        for (int i = ryt - 1; i > lft - 1; i--) {
            std::cout << arr[btm - 1][i] << TAB;
        }
        btm--;
        for (int i = btm - 1; i > top - 1; i--) {
            std::cout << arr[i][lft] << TAB;
        }
        lft++;
    }
}
