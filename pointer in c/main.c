#include <stdio.h>
#include <stdlib.h>

/*
Pointers in C language is a variable that stores/points the address of another variable.

A Pointer in C is used to allocate memory dynamically i.e. at run time.

The pointer variable might be belonging to any of the data type such as int, float, char, double, short etc.

Pointer Syntax : data_type *var_name; Example : int *p;  char *p;
Where, * is used to denote that “p” is pointer variable and not a normal variable.

KEY POINTS TO REMEMBER ABOUT POINTERS IN C:
Normal variable stores the value whereas pointer variable stores the address of the variable.
The content of the C pointer always be a whole number i.e. address.
Always C pointer is initialized to null, i.e. int *p = null.
The value of null pointer is 0.
& symbol is used to get the address of the variable.
* symbol is used to get the value of the variable that the pointer is pointing to.
If a pointer in C is assigned to NULL, it means it is pointing to nothing.
Two pointers can be subtracted to know how many elements are available between these two pointers.
But, Pointer addition, multiplication, division are not allowed.
The size of any pointer is 2 byte (for 16 bit compiler). */
