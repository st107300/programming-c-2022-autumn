#include<iostream>

int main(int argc, char* argv[])
{
	int a, b, c, d = 0;
	std::cin >> a >> b >> c >> d;
	if ((a == c) || (b == d) || (a - c == b - d) || (c - a == b - d))
	{
		std::cout << "YES" << std::endl;
	}
	else
	{
		std::cout << "NO" << std::endl;
	}
	return EXIT_SUCCESS;
}