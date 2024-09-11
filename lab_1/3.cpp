#include <iostream>
#include <cmath>

int main()
{
	std::string number;
	std::cout << "input number: ";
	std::cin >> number;
	int result = (number[0] - 48) + (number[1] - 48) + (number[2] - 48); 
	std::cout << result <<std::endl;
	return 0;
}
