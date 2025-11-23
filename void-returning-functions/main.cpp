#include <iostream>

// void-returning function does not return a value
void printMessage() {
	std::cout << "Hello! Hello! Hello!" << std::endl;

	// No return value so we just use return; to exit the function early
	// Also, this is redundant since the return at the end of a void function is implicit
	return;
}

// Also, the return at the end of a void function is implicit so we can omit it
void printMessageWithoutExplictiReturn() {
	std::cout << "Hello! Hello! Hello!" << std::endl;
}

int main() 
{
	std::cout << "Americaya! " << std::endl;
	printMessage();
	printMessageWithoutExplictiReturn();

	return 0;
}

