#include <stdio.h>

int main(void)
{
  
int n;
int a[5];
int *p;

a[2] = 1024;
p = &n;
/*
* write your line of code here...
* Remember:
* - you are not allowed to use the variable a
* - you are not allowed to modify the variable p
* - you can only write one statement
* - you are not allowed to use a comma (,)
* - you are not allowed to code anything else than the line of expected code at the expected line
* - your code should be written at line 19, before the ;
* - do not remove anything from the initial code (not even the comments)
* - and don’t change anything but the line of code you are adding (don’t change the spaces to tabs!)* - you are allowed to use the standard library
*/
printf("a[2] = %d\n", 98); // Added line
/* ...so that this prints 98\n */
printf("a[2] = %d\n", a[2]);
return (0);
}
