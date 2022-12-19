#include<iostream>

int main(int argc, char* argv[]) {
    int a[100000] = { 0 };
    int n = 0, k = 0, i = 0, x = 0, h = 1;
    int mn = 0, mx = 0, imn = 0, imx = 0;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> x;
        a[i] = x;
        if (a[i] > 0) {
            k = k + a[i];
        }
        if (a[i] > mx) {
            mx = a[i], imx = i;
        }
        if (a[i] < mn) {
            mn = a[i], imn = i;
        }
    }
    if (imx > imn) {
        for (i = imn + 1;i < imx;i++) {
            h = h * a[i];
        }
    }
    else {
        for (i = imx + 1;i < imn;i++) {
            h = h * a[i];
        }
    }
    std::cout << k << " " << h;

    return EXIT_SUCCESS;
}