#include<iostream>

int main(int argc, char* argv[]) 
{
	int n, a, str, b, bb = 0;
	std::cin >> n;
	str = 1;
	a = 0;
	b = 0;
	bb = 0;
	do 
	{
		a += str;
		bb = a;
		while (b < n) 
		{
			if (a < n) 
			{
				std::cout << a << " ";
				b = b + 1;
				a = a + 1;
				bb = a;
			}
			else 
			{

				std::cout << bb << " ";
				b = b + 1;
				a = a + 1;
				bb = bb - 1;
			}

		}
		std::cout << "\n";
		str = str + 1;
		a = 0;
		b = 0;
		bb = 0;
	} while (str <= n);
	return EXIT_SUCCESS;
}