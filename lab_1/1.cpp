#include <iostream>
#include <cmath>

int main()
{
	int k, m;
	double r, d;
	double a, b, c;
	std::cout << "input k,m,r,d: ";
	std::cin >> k >> m >> r >> d;
	a = (tan(k / (2 + r))) + (sqrt((exp(r + 1)) / (fabs(pow(d, 5) + 1))));
	b = sin(pow(k, 2) + 3) + 2 * (pow(cos(k * m), 3));
	c = ((pow(log(2 + pow(k, 2)), 3) + pow(log(2 + pow(k, 3)), 2)) / 3) + pow((tan(k/r)/ (2 + 7.5 * sin(d))), 2);
	std::cout << "A = " << a << std::endl;
	std::cout << "B = " << b << std::endl;
	std::cout << "C = " << c << std::endl;
	return 0;
}