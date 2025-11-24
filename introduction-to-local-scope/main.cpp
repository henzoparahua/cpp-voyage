#include <iostream>

//	Variables defined inside the body of a function or a block are said to have local scope.
int add(int x, int y)  // Function parameters x and y are local to the function add
{
	int z{ x + y };	// Variable z is local to the function add
	
	//	Local variables are destroyed in the opposite order in which 
	//	they were created when the block in which they were defined ends.
	return z;
} // x, y, and z go out of scope here so they are destroyed
//	In most cases, when object goes out of scope, its destructor is called automatically.
//	Any object after it has been destroyed will result in undefined behavior.
//	Accessing local variables outside their scope will result in a compilation error.
//	At some point after destruction, the memory used by the object will be deallocated.

//	An identifier's scope determines where the identifier can be accessed in the code.
//	When an identifier can not be seen, we can not use itm, and it is out of scope.
//	Scope is a compile-time property, and trying to use an identifier when it is not in 
//	the current scope will result in a compilation error.

// An identifier with local scope can only be accessed within the block in which it is defined.
// The block is defined by the opening and closing curly braces { }.
int main()
{	
	int a{ 5 };	// Variable a is local to the function main
	int b{ 10 };	// Variable b is local to the function main
	int sum = add(a, b);	// Call the function add with a and b as arguments
	std::cout << "The sum of " << a << " and " << b << " is " << sum << std::endl;
	return 0;
} // a and b go out of scope here so they are destroyed