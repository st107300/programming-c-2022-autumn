#include<iostream>

int main(int argc, char* argv[]) {
    int n = 0; 
    int m = 0;
    int i = 0; 
    int j = 0; 
    int mn = 0; 
    int mm = 0;
    int** a = nullptr;
    a = new int* [n];
    std::cin >> n;
    std::cin >> m;
    for (i = 0; i < n; i++) {
        a[i] = new int[m];
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cin >> *(*(a + i) + j);
        }
    }
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            mn = mn + *(*(a + i) + j);
        }
        std::cout << mn << " ";
        mn = 0;
    }
    std::cout << std::endl;
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            mm = mm + *(*(a + i) + j);
        }
        std::cout << mm << " ";
        mm = 0;
    }
    std::cout << std::endl;
    std::cout << std::endl;
    for (i = 0; i < n; i++) {
        for (j = 0; j < m; j++) {
            std::cout << *(*(a + i) + j) << " ";
        }
        std::cout << std::endl;
    }    
    for (i = 0; i < m; ++i)
    {
        delete[] * (a + i);
    }
    delete[] a;
    return EXIT_SUCCESS;
}