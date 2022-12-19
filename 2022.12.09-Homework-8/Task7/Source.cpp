#include <iostream>

void mod(char* a, char* b, int i) {
    b[2 * i] = a[i];
    if (a[i + 1] == 0) {
        return;
    }
    b[2 * i + 1] = '*';
    mod(a, b, i + 1);
}

int main(int argc, char* argv[]) {
    char a[10000] = { 0 };
    char b[10000] = { 0 };
    std::cin >> a;
    mod(a, b, 0);
    std::cout << b;
    return EXIT_SUCCESS;
}