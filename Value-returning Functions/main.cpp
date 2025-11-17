#include <iostream>

int getValue() {
	int num{};

	std::cin >> num;

	return num;
}

int main() 
{
	std::cout << "Gimme a value: ";
	int x{};	
	x = getValue();

	std::cout << "You entered: " << x << std::endl;

	return 0;
}