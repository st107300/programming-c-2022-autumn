#include<iostream>

char max(char* a, int i, int m) {
    if (a[i] == 0) {
        return m;
    }
    else {
        if (int(a[i]) < int(a[i + 1])) {
            m = int(a[i + 1]);
            return max(a, i + 1, m);
        }
        return max(a, i + 1, m);
    }
}

int main(int argc, char* argv[]) {
    char a[100000] = { 0 };
    std::cin >> a;
    std::cout << max(a, 0, 0);
    return EXIT_SUCCESS;
}

