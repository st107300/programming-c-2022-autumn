#include<iostream>

int main(int argc, char* argv[]) {
	int a[1000] = { 0 };
	int b[1000] = { 0 };
	int c[1000] = { 0 };
	int n = 0;
	int k = 0;
	int d = 0;
	int x = 0;
	int i = 0;
	int j = 0;
	int e = 0;
	int	f = 0;
	std::cin >> n;
	for (i = 0; i < n; i++) {
		std::cin >> x;
		a[i] = x;
		if (x % 2 == 1) {
			b[e] = x, k++, e++;
		}
		else {
			c[f] = x, d++, f++;
		}
	}
	for (j = 0; j < k;j++) {
		std::cout << b[j] << " ";
	}
	std::cout << std::endl;
	for (i = 0; i < d; i++) {
		std::cout << c[i] << " ";
	}
	std::cout << std::endl;
	if (k > d) {
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}

	return EXIT_SUCCESS;
}