0x06. C - More pointers, arrays and strings

Question #0
var = "Holberton";
What is the type of var?

char*

Question #1
What is wrong with the following code?

int n = 5;
int array[10];
int i = 3;

array[n] = i;

Nothing is wrong

Question #2
What is wrong with the following code?

int n = 5;
int array[n];
int i = 3;

array[n] = i;

It is impossible to declare the variable array this way

Question #3
What is wrong with the following code?

int n = 5;
int array[5];
int i = 3;

array[n] = i;

It is not possible to access array[n]

Question #4
Why is it important to reserve enough space for an extra character when declaring/allocating a string?

For the null byte (end of string)

Question #5
What is/are the difference(s) between the two following variables? (Except their names)

char *s1 = "";
char *s2 = NULL;

The first one can be dereferenced, not the second one

Question #6
What happens when one tries to dereference a pointer to NULL?

Segmentation fault

