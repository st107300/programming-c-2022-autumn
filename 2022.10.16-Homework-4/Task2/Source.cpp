#include<iostream>

int main(int argc, char* argv[]) 
{
	int x, i, k, y = 0;
	std::cin >> x;
	for (i = 1; x; i = i * 2) 
	{
		k = x % 10 * i;
		y = y + k;
		x = x / 10;
	}
	std::cout << y << std::endl;
	return EXIT_SUCCESS;
}