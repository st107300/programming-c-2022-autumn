#include<iostream>

void nahoi(int n, int m, int k) {
    if (n <= 0) {
        return;
    }
    int a = 6 - m - k;
    nahoi(n - 1, m, a);
    std::cout << "Disk " << n << " move from " << m << " to " << k << std::endl;
    nahoi(n - 1, a, k);
}

int main(int argc, char* argv[]) {
    int n = 0;
    std::cin >> n;
    nahoi(n, 1, 2);
    return EXIT_SUCCESS;
}

