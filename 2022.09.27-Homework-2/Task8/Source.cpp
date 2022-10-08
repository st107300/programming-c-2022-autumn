#include<iostream>

int main(int argc, char* argv[])
{
	int a, b, c = 0;
	std::cin >> a >> b >> c;
	if ((a < b + c) && (b < a + c) && (c < b + a))
	{
		if ((a * a < b * b + c * c) && (b * b < a * a + c * c) && (c * c < a * a + b * b))
		{
			std::cout << "acute" << std::endl;
		}
		else
		{
			if ((a * a == b * b + c * c) || (b * b == a * a + c * c) || (c * c == a * a + b * b))
			{
				std::cout << "right" << std::endl;
			}
			else
			{
				std::cout << "obtuse" << std::endl;
			}
		}
	}
	else
	{
		std::cout << "impossible" << std::endl;
	}
	return EXIT_SUCCESS;
}