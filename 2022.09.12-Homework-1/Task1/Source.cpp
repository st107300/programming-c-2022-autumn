#include <iostream>

int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	std::cout << "The n�xt number for the number " << n << " is " << n + 1 << "." << std::endl;
	std::cout << "The previuos number for the number " << n << " is " << n - 1 << "." << std::endl;
	return EXIT_SUCCESS;
}