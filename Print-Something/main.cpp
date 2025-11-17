#include <iostream>;	// Include the iostream library for input and output

// Definition of user-defined function
void printSomething() {
	std::cout << "I am printing something." << std::endl;
}

int main()
{
	std::cout << "Start of the program" << std::endl;
	printSomething();
	std::cout << "End of the program" << std::endl;

	return 0;
}