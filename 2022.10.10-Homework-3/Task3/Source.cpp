#include<iostream>

int main(int argc, char* argv[]) 
{
	int n, a, str, b = 0;
	std::cin >> n;
	str = 1;
	a = 0;
	b = 0;
	do 
	{
		a = a + str;
		while (b < n) 
		{
			std::cout << a << " ";
			a = a +	1;
			b = b + 1;
		}
		std::cout << "\n";
		str = str + 1;
		a = 0;
		b = 0;
	} while (str <= n);
	return EXIT_SUCCESS;
}