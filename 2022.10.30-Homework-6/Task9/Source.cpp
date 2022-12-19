#include <iostream>

int main(int argc, char* argv[])
{
	int n = 0;
	int k = 0;
	int m = 0;
	int o = 0;
	int p = 0;
	int h = 0;
	int a[100] = { 0 };
	int i = 0;
	k = 1;
	std::cin >> n;
	for (i = 0; i < n; ++i) {
		std::cin >> a[i];
	}
	m = a[0];
	while (p != n - 1) {
		for (i = p + 1; i < n; ++i) {
			if (a[i] > m) {
				m = a[i];
				o = i;
			}
		}
		k += o - p;
		h += k * m;
		p = o;
		m = 0;
		k = 0;
	}
	std::cout << h;
	return EXIT_SUCCESS;
}