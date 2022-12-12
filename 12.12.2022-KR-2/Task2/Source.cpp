#include<iostream>

void raz(int a[100000] = { 0 }, int n = 0)
{
    if (n != 0)
    {
        std::cout << a[n - 1] << " ";
        return raz(a, n - 1);
    }
}

int main(int argc, char* argv[]) {
    int n = 0, k = 0, i = 0;
    std::cin >> n;
    int a[100000] = { 0 };
    for (i = 0; i < n; ++i)
    {
        std::cin >> a[i];
    }
    raz(a, n);
    return EXIT_SUCCESS;
}