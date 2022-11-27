#include<iostream>

int main(int argc, char* argv[]) {
	int a[1000] = { 0 };
	int n = 0, k = 0, x = 0;
	int i = 0, j = 0, e = 0, f = 0;
	std::cin >> n;
	for (i = 0; i < n; i++) {
		std::cin >> x;
		a[i] = x;
	}
	std::cin >> k;
	for (i = 0; i < n; i++) {
		std::cin >> e >> f;
		for (j = e - 1; j < f; j++) {
			std::cout << a[j] << " ";
		}
		std::cout << std::endl;
	}
	return EXIT_SUCCESS;
}