#include<iostream>

int main(int argc, char* argv[]) {
	int f[1000] = { 0 };
	int h[1000] = { 0 };
	int p[1000] = { 0 };
	int n = 0, i = 0, l = 0, x = 0;
	int a = 0, b = 0, c = 0, d = 0;
	std::cin >> n;
	for (i = 0; i < n; i++) {
		f[i] = i + 1;
		h[i] = i + 1;
		p[i] = i + 1;
	}
	std::cin >> a >> b;
	l = b - 1;
	for (i = a - 1; i < b ; i++) {
		h[i] = f[l];
		p[i] = f[l];
		l = l - 1;

	}
	std::cin >> c >> d;
	l = d - 1;
	for (i = c - 1; i < d ; i++) {
		p[i] = h[l];
		l = l - 1;
	}

	for (i = 0; i < n; i++) {
	std::cout << p[i] << " ";
	}
	return EXIT_SUCCESS;
}