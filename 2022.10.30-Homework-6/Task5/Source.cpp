#include<iostream>

int main(int argc, char* argv[]) {
    int a[100000] = { 0 };
    int n = 0, k = 0, x = 0;
    int i = 0, j = 0;
    std::cin >> n;
    for (i = 0; i < n; i++) {
        std::cin >> x;
        a[i] = x;
        if (a[i] < a[k]) k = i;
    }
    for (i = k;i < n;i++) {
        std::cout << a[i] << " ";
    }
    for (i = 0;i < k;i++) {
        std::cout << a[i] << " ";
    }

    return EXIT_SUCCESS;
}