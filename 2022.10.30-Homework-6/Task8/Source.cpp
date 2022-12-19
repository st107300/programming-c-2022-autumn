#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0;
    int a[10000]{ 0 };
    int b[10000]{ 0 };
    int maxind = 0;
    int sum = 0;
    int oldind = 0;
    int max = 0;
    int i = 0;
    int len = 1;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> a[i];
    }
    max = a[0];
    while (oldind != n - 1) {
        for (i = oldind + 1;i < n; i++) {
            if (a[i]> max) {
                max = a[i];
                maxind = i;
            }
        }
        len += maxind - oldind;
        sum += len * max;
        oldind = maxind;
        len = 0;
        max = 0;

    }
    std::cout << sum;
    return EXIT_SUCCESS;
}