#include<iostream>

int Is_Prime(int n, int k)
{

	if (n == 2 or k * k > n)
	{
		return 1;
	}
	if (not(n % k))
	{
		return 0;
	}
	return Is_Prime(n, k = k + 1);
}

int main(int argc, char* argv[]) {
	int n = 0, k = 0;
	std::cin >> n;
	k = 2;
	if (Is_Prime(n, k) == 0) std::cout << "composite" << std::endl;
	if (Is_Prime(n, k) == 1) std::cout << "prime" << std::endl;
	return EXIT_SUCCESS;
}