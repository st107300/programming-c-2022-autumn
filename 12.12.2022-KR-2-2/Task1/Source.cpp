#include<iostream>

int** spi(int** a, int x, int y, int i, int n, int k) {
	if (i > n * n) {
		return a;
	}
	if (y < n - k && x == k - 1) {
		if (*(*(a + x) + y)) {
			*(*(a + x + 1) + y + 1) = i;
			return spi(a, x, ++y, ++i, n, ++k);
		}
		else {
			*(*(a + x) + y) = i;
			return spi(a, x, ++y, ++i, n, k);
		}
	}
	else if (y == n - k && x < n - k) {
		*(*(a + x) + y) = i;
		return spi(a, ++x, y, ++i, n, k);
	}
	else if (y > k - 1 && x == n - k) {
		*(*(a + x) + y) = i;
		return spi(a, x, --y, ++i, n, k);
	}
	else if (y == k - 1 && x >= k) {
		*(*(a + x) + y) = i;
		return spi(a, --x, y, ++i, n, k);
	}
}

int main(int argc, char* argv[]) {
	int n = 0;
	int i = 0;
	int j = 0;
	int** a = new int* [n];
	for (i = 0; i < n; ++i) {
		*(a + 1) = new int[n] {0};
	}
	a = spi(a, 0, 0, 1, n, 1);
	for (i = 0; i < n; ++i) {
		for (j = 0; j < n; ++j) {
			std::cout << *(*(a + i) + j) << " ";
		}
		std::cout << std::endl;
	}
	for (i = 0; i < n; ++i)
	{
		delete[] * (a + i);
	}
	delete[] a;
	return EXIT_SUCCESS;
}