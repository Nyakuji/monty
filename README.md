# **monty**
**monty** is an interpreter of Monty ByteCodes files, which is a scripting language just like Python.
- Files containing Monty byte codes usually have the **.m** extension

## **Technologies and Requirements**
- All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=c89
- You allowed to use a maximum of one global variable
- Allowed editors: vi, vim, emacs

### **opcodes**

|opcodes | Description   |
|--------|---------------|
|push|	Pushes an element to the stack
|pall|	Prints all the values on the stack
|pint|	Prints the value at the top of the stack
|pop|	Removes the top element of the stack
|swap|	Swaps the top two elements of the stack
|queue|	Sets the format of the data to a queue (FIFO)
|stack|	Sets the format of the data to a stack (LIFO)
|nop|	Doesn't do anything
|add|	Adds the top two elements of the stack
|sub|	Subtracts the top element of the stack from the second top element of the stack
|mul|	Multiplies the second top element of the stack with the top element of the stack
|div|	Divides the second top element of the stack by the top element of the stack
|mod|	Computes the rest of the division of the second top element of the stack by the top element of the stack
|pchar|	Prints the char at the top of the stack
|pstr|	Prints the string starting at the top of the stack
|rotl|	Rotates the stack to the top
|rotr|	Rotates the stack to the bottom
