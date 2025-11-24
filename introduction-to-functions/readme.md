Every executable C++ program must have a `main()` function; it serves as the mandatory starting point for execution.

As programs grow, placing all code inside `main()` quickly becomes unmanageable. **Functions** solve this by allowing us to break the program into small, modular chunks. This approach makes code far easier to organize, test, and reuse. While the C++ standard library provides many pre-built functions, you will also write your own, known as **user-defined functions**.

Consider a case that might occur in real life: you’re reading a book, when you remember you need to make a phone call. You put a bookmark in your book, make the phone call, and when you are done with the phone call, you return to the place you bookmarked and continue your book precisely where you left off.

A great way to understand function calls is with a real-world analogy:

Imagine you're reading a book when you suddenly remember you need to make a phone call. You place a **bookmark** at your current page, make the call (a separate task), and once you're finished, you return to the bookmark and **resume reading** exactly where you left off.

C++ programs operate similarly. When the CPU is executing a function, it processes statements sequentially. If it encounters a **function call**, it "places a bookmark" at that exact point.

1. The function initiating the call is the caller.
2. The function being executed is the callee.
3. A function call is also sometimes called an invocation (the caller invokes the callee).


**Nomenclature**

The function initiating the function call is the caller, and the function being called (executed) is the callee. A function call is also sometimes called an invocation, with the caller invoking the callee.

 

## User-defined Functions

First, let’s start with the most basic syntax to define a user-defined function.

```cpp
returnType functionName() 
{

}
```

The first line, `returnType functionName()`, is known as the **function header**. It has three main parts:

- **`returnType`**: This is the type of value the function will send back (or `void` if it sends nothing back).
- **`functionName`**: This is the identifier, or name, you give to the function.
- **`()`**: The parentheses after the name tell the compiler that this is a function.

The section between the curly braces `{}` is the **function body**. This is where you write the statements that the function will execute when it is called.

To call (or invoke) a function, you simply use its name followed by a set of parentheses. For example, `functionName()` calls the function defined above.

Consider this example program and its output:

```cpp
Start of the program
I am printing something.
End of the program
```

1. Execution begins at the top of `main()`.
2. The first line prints "Start of the program".
3. The second line is a function call to `printSomething()`.
4. Execution in `main()` is suspended, and the program jumps to the top of `printSomething()`.
5. The first (and only) line in `printSomething()` prints "I am printing something.".
6. When `printSomething()` finishes, execution returns to `main()` at the point just after the call.
7. The next statement in `main()` executes, printing "End of the program".

> When calling a function, don’t forget the parentheses () after its name. If you just write printSomething; without parentheses, the function will not be called, and your program will likely not compile as intended.

**Warning**

In C++, functions can call other functions, which can in turn call other functions. However, C++ **does not** support *nested functions*. This means you cannot define one function inside the body of another function.

All function definitions must be separate and placed outside of any other function body (including `main()`).

 
