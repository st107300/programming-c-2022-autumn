#include<iostream>

void nahoi(int n, int t, int f) {
	int k = 6 - t - f;
	if (n > 0) {
		if (t % f == t) {
			nahoi(n - 1, t, f);
			std::cout << n << ' ' << t << ' ' << k << std::endl;
			nahoi(n - 1, f, t);
			std::cout << n << ' ' << k << ' ' << f << std::endl;
			nahoi(n - 1, t, f);
		}
		else {
			nahoi(n - 1, t, k);
			std::cout << n << ' ' << t << ' ' << f << std::endl;
			nahoi(n - 1, k, f);
		}
	}
}


int main(int argc, char* argv[]) {
	int n = 0;
	std::cin >> n;
	nahoi(n, 1, 2);
	return EXIT_SUCCESS;
}