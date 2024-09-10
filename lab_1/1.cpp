#include <iostream>
#include <cmath>

int main()
{
	int k, m;
	double r, d;
	double a;
	std::cout << "input k,m,r,d: ";
	std::cin >> k >> m >> r >> d;
	a = (tan(k / (2 + r))) + (sqrt((exp(r + 1)) / (fabs(pow(d, 5) + 1))));
	std::cout << a;
	return 0;
}