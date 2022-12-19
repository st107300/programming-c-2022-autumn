#include <iostream>

short fun(short a, short b, short c)
{
    if (a <= 0 || b <= 0 || c <= 0)
        return 1;
    else if (a > 20 || b > 20 || c > 20)
        return fun(20, 20, 20);
    else if (a < b && b < c)
        return fun(a, b - 1, c) + fun(a, b, c - 1) - fun(a, b - 1, c - 1);
    else
    {
        a--;
        return fun(a, b - 1, c) + fun(a, b, c - 1) - fun(a, b - 1, c - 1) + fun(a, b, c);
    }
}

int main(int argc, char* argv[]) {
    int a = 0;
    int b = 0;
    int c = 0;
    std::cin >> a >> b >> c;
    std::cout << fun(a, b, c);
}