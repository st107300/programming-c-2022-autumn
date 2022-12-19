#include<iostream>

int hjom(int n, int k) {
	if (k == n || k == 1) {
		return 1;
	}
	else {
		return hjom(n - 1, k - 1) + hjom(n - 1, k);
	}
}

int main(int argc, char* argv[]) {
	int n = 0; 
	int k = 0;
	std::cin >> n;
	std::cin >> k;
	std::cout << hjom(n, k);
	return EXIT_SUCCESS;
}

