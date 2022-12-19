#include<iostream>

int one(int n) {
	if (n < 0) {
		return 0;
	}
	else {
		if ((n == 3) || (n == 5)) {
			return 1;
		}
		else {
			return one(n - 3);
			return one(n - 5);
		}
	}
}

int main(int argc, char* argv[]) {
	int a = 0;
	std::cin >> a;
	if (one(a - 1) == 0) {
		std::cout << "NO";
	}
	else {
		std::cout << "YES";
	}
	return EXIT_SUCCESS;
}
