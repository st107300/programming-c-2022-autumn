#include<iostream>

int main(int argc, char* argv[]) {
    int a[100] = { 0 };
    int b[100] = { 0 };
    int n = 0, k = 0, x = 0, i = 0, j = 0, g = 0, m = 0, res = 1;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    std::cin >> k;
    if (k > 0) {
        for (i = (k - 1); i < n; i++) {
            b[i - k + 1] = a[i];
        }
        for (i = 0; i < (k - 1); i++) {
            b[i + k] = a[i];
        }
    }
    else {
        x = abs(k);
        for (i = 0; i < (k - 1); i++) {
            b[i - k + 1] = a[i];
        }
        for (i = (k - 1); i < n; i++) {
            b[i + k] = a[i];
        }
    }
    for (i = 0; i < n; i++) {
        std::cout << b[i] << " ";
    }
    return EXIT_SUCCESS;
}