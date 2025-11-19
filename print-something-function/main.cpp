#include <iostream>;	// Include the iostream library for input and output

// Definition of user-defined function
void printSomething() {
	std::cout << "I am printing something." << std::endl;
}

int main()
{
	/* Nested functions are not allowed in C++.
	   Functions must be defined at the global scope or within a class/struct.

	   void nestedFunction() {
		   std::cout << "This is a nested function." << std::endl;
	   }
	
	*/

	std::cout << "Start of the program" << std::endl;
	printSomething();
	printSomething();
	printSomething();
	std::cout << "End of the program" << std::endl;

	return 0;
}