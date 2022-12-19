#include<iostream>

int main(int argc, char* argv[]) {
	int a[1000] = { 0 };
	int n = 0;
	int k = 0;
	int x = 0;
	int i = 0;
	int j = 0;
	int e = 0;
	int f = 0;
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