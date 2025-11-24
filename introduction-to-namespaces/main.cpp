#include <iostream>
//	If two identical identifiers are introduced in the same scope, the compiler will raise linker error.
//	Namespace scope allows us to group related identifiers together and avoid naming conflicts.

//	A scope region is an area of source code where all declared identifiers are considered distinct from 
//	names declared in other scope regions. A scope region is defined by a pair of curly braces { }.
//	The body of a function is ne example of a scope region. Two identical identifiers can be declared
//	in different scope regions without causing a naming conflict. 

//	Namespaces provide a way to group related identifiers together and avoid naming conflicts.

//	The std namespace is a standard namespace that contains all the standard C++ library identifiers.
//	To access an identifier in a namespace, we use the scope resolution operator ::. So we call it by std::.
//	The :: is called the scope resolution operator. The identifier to the left of the :: is the namespace name,
//	if no namespace is specified, the global namespace is assumed. When an identifier includes a namespace prefix,
//	it is said to be fully qualified.

int main()
{
	int value{ 42 }; // Local variable 'value' in the main function

	// Accessing the standard library's cout and endl using the std namespace
	std::cout << "The value is: " << value << std::endl;

	return 0;
}


//	Avoid using-directive statements in header files, as they can lead to naming conflicts and unexpected behavior
//	Using-directive statements bring all the identifiers from a namespace into the current scope.