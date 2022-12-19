#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int m = 0;
	int a[100000] = { 0 };
	int b[100000] = { 0 };
	int c = 0;
	std::cin >> n;
	std::cin >> m;
	for (int i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	for (int i = 0; i < m; ++i) {
		std::cin >> b[i];
	}
	if (n < m) {
		for (int i = 0; i < n; ++i) {
			if (a[i] != -1) {
				for (int j = i + 1; j < n; ++j) {
					if (a[i] == a[j]) {
						a[j] = -1;
					}
				}
			}
		}
		for (int i = 0; i < n; ++i) {
			if (a[i] != -1) {
				bool o = 0;
				for (int j = 0; j < m; ++j) {
					if (a[i] == b[j]) {
						o = 1;
						break;
					}
				}

				if (not o) {
					a[i] = -1;
				}
			}
		}
		while (true) {
			int max = -1;
			int ind = 0;
			for (int i = 0; i < n; ++i) {
				if (a[i] > max) {
					max = a[i];
					ind = i;
				}
			}
			a[ind] = -1;
			if (max == -1) {
				break;
				break;
			}
			else {
				a[c] = max;
				++c;
			}
		}
		for (int i = c - 1; i >= 0;--i) {
			std::cout << a[i] << " ";
		}
	}
	else {
		for (int i = 0; i < m; ++i) {
			if (b[i] != -1) {
				for (int j = i + 1; j < m; ++j) {
					if (b[i] == b[j]) {
						b[j] = -1;
					}
				}
			}
		}
		for (int i = 0; i < m; ++i) {
			if (b[i] != -1) {
				bool o = 0;
				for (int j = 0; j < n; ++j) {
					if (b[i] == a[j]) {
						o = 1;
						break;
					}
				}
				if (not o) {
					b[i] = -1;
				}
			}
		}
		while (true) {
			int max = -1;
			int ind = 0;
			for (int i = 0; i < m; ++i) {
				if (b[i] > max) {
					max = b[i];
					ind = i;
				}
			}
			b[ind] = -1;
			if (max == -1) {
				break;
			}
			else {
				b[c] = max;
				++c;
			}
		}
		for (int i = c - 1; i >= 0;--i) {
			std::cout << b[i] << " ";
		}
	}
	return EXIT_SUCCESS;
}