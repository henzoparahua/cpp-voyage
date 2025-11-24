#include <iostream>

// A function parameter is a variable in the function definition that works as a 
// placeholder for the value that will be passed to the function when it is called.

// Function that takes a string parameter and prints it
void printInput(std::string& input) {
	std::cout << "You entered: " << input << std::endl;
}

int main()
{
	std::string userInput;

	std::cout << "Enter a string: ";
	std::cin >> userInput;

	printInput(userInput);

	return 0;
}