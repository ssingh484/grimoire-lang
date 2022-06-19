# What is this?

This project is a learning exercise in tying together everything I learnt in the Compilers course at Georgia Tech as well as learning how to use the LLVM toolchain.
It is a functioning compiler for a simple imperative programming language like C ( albeit without as many features or datatypes ). The language is styled after fantasy
elements due to my geeky love for the genre. Below I lay out the syntax for the language as implemented so far and describe how to install it and make it compile a grimoire language program into an object file.
The object file output of this compiler can be linked into a functioning executable by any linker including the one in the GCC collection.

# Syntax

- Each grimoire program has a genesis function ( a renamed version of the typical entrypoint function "main" ) that serves as the entrypoint of the program.
- Each statement in the program is terminated by a semicolon and blocks ( function bodies, conditional bodies and loop bodies ) open and close with curly braces.
- The program must have all global variable declarations at the top, followed by all the function declarations. Variable declarations are written as such:

`summon i from int embodies 57;`

where **summon** is the keyword to declare a variable and **from** is used to provide the datatype ( currently only int or int array ) and optionally **embodies** can be used to provide the initial value of the variable.
The only datatype implemented is int which can also be used to make an array variable by replacing "from int" with "from array[_size_] of int" in a declaration.
- Local variables can be declared in exactly the same manner as global variables within function declarations but they must all be declared before any other statements within the function.
- **becomes** is the assignment operater used to assign values to variables
- expressions can be composed of function calls as well as variables and integer literals and use standard operators:
  -  \+ , - , / , * for math
  -  == , =/= for equal and not equal respectively
  -  < , > , <= , >= for comparisons
  -  & , | , ~ for logical operations
- Conditionals are similar to C syntax except for a lack of else if statements ( currently ) and needing opening and closing braces regardless of the number of statements within. For example:
  ```  
  if (n <= 1) {
		return n;
	} else {
		return n;
	}
  ```
- Loops are implemented as a simple iteration by incrementing a variable by 1 till it reaches a certain value. The amount the variable is incremented by is currently fixed and unchangeable to keep the compiler simple. For example:
  ```
  for x becomes 0 to 20 {
		writei( x );
	}
  ```
- Function calls are done similarly to C where arguments are passed in separated by commas. For example:
  ```
  some_func(x, y, z);
  ```
- Function declarations are done as below:
  ```
  spell fib(n from int) from int {
	/* statements */
  }

  ```
where **spell** is the keyword for specifying a function declaration followed by the function name, its parameters (if any) separated by commas inside () and then optionally a return type specified by "from _datatype_"
- Comments, as seen in the code example above are enclosed in /* and \*/ to open and close the comment for both single line and multi-line comments.
- writec and writei are two functions with a single integer type parameter that can be used to display a value as either an ASCII character ( by truncating the integer to an 8 bit integer value and using that as the ASCII value to display ) or to display a value as the integer respectively. They serve as wrappers for calls to the putchar and printf functions from the C standard library. The getchar function from the C library can also be used to take input values from the user. Presently, this is the only input and output functionality implemented.

# Installation and Usage

## Dependencies:
- LLVM ( the project itself doesn't require clang so installing LLVM only should provide all the shared libraries needed to build the compiler )
- CMake ( this is the build system used by the project to build the final executable of the compiler )

## Building
- To build the project from source, clone this repo and make a build folder.
- Next, use `cmake ..` to create the necessary build files
- Use `cmake --build .` to build the compiler executable into a **Debug** folder within the build folder
- **Note: Optionally, one can use the GenerateParser script to rebuild the ANTLR lexer and parser files from the grammar file before following the above steps**

## Usage
Grimoire files with a .sigil extension can be passed in via the command line arguments to the grimoire executable built in the above steps to get object files with the same names in the same folders as the source code files as below:

`grimoire.exe ../../example_progs/fib.sigil`

The above command from within the Debug folder where the executable is created will output a fib.out object file that can then be linked into an executable within the same example_progs folder as fib.sigil


