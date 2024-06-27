# Project Title: C - Stacks, Queues - LIFO, FIFO

## Table of Contents
1. About
2. Learning Objectives
3. Requirements
4. Getting Started
5. Contributing
6. License

## About <a name="about"></a>
This project is part of the curriculum of the ALX Software Engineering program. The main objective of this project is to understand and implement theStack and Queue Data Structures using the Monty Scripting Language.The goal of this project is to create an interpreter for Monty ByteCodes files.

## Learning Objectives <a name="learning-objectives"></a>
- What do LIFO and FIFO mean
- What is a stack, and when to use it
- What is a queue, and when to use it
- What are the common implementations of stacks and queues
- What are the most common use cases of stacks and queues
- What is the proper way to use global variables

## Requirements <a name="requirements"></a>
At the end of this project, I am expected to be able to explain to anyone, without the help of Google:
- Allowed editors: `vi`, `vim`, `emacs`
- All your files will be compiled on Ubuntu 20.04 LTS using `gcc`, using the options `-Wall -Werror -Wextra -pedantic -std=gnu89`
- All your files should end with a new line
- A `README.md` file, at the root of the folder of the project is mandatory
- Your code should use the `Betty` style linter.
- You allowed to use a maximum of one global variable
- No more than 5 functions per file
- You are allowed to use the C standard library
- The prototypes of all your functions should be included in your header file called `monty.h`
- Don’t forget to push your header file
- All your header files should be include guarded
- You are expected to do the tasks in the order shown in the project

## Getting Started <a name="getting-started"></a>
1. Clone this repository: `git clone https://github.com/Pritchad25/monty.git`
2. Access the project repository
3. The code in this project was compiled this way: `$ gcc -Wall -Werror -Wextra -pedantic -std=c89 *.c -o monty`
-This is how each problem is structured and solved:
## Example
Implement the `push` and `pall` opcodes
The push opcode
The opcode `push`  pushes an element to the stack.

	- Usage: `push <int>`
		- where `<int>` is an integer
	- if `<int>` is not an integer or if there is no argument given to `push`, print the error message `L<line_number>: usage: push integer`, followed by a new line, and exit with the status `EXIT_FAILURE`
		- where is the line number in the file
	- You won’t have to deal with overflows. Use the `atoi` function

The pall opcode

The opcode `pall` prints all the values on the stack, starting from the top of the stack.

	- Usage `pall`
	- Format: see example
	- If the stack is empty, don’t print anything
The Monty bytecodes for this example will be in the file `00.m`. The solution for this example
will be 1 or more C files which were compiled together with other C files to produce 1 executable file
namely `monty`. So, by running `./monty bytecodes/00.m`, we are intepreting the Monty Bytecode File `00.m` and
the Correct output should be displayed, as exemplified below:

`julien@ubuntu:~/monty$ cat -e bytecodes/00.m`
`push 1$`
`push 2$`
`push 3$`
`pall$`
`julien@ubuntu:~/monty$ ./monty bytecodes/00.m`
`3`
`2`
`1`
`julien@ubuntu:~/monty$`


## Contributing <a name="contributing"></a>
Pull requests are welcome. For major changes, please open an issue first to discuss what you would like to change.

## License <a name="license"></a>
ALX 2024 - [alxafrica](http://www.alxafrica.com)
