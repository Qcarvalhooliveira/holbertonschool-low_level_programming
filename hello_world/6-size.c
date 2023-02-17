#include <stdio.h>
/**
<<<<<<< HEAD
 * main  - Program C
 * 
 * Return 0
 */
=======
 * * main - A Program c that prints the size of various types on the computer
 * * Return 0 (Sucess)
*/
>>>>>>> d2d9faedeadd6aafc622ed2906d4dd443c3d951c
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float f;

<<<<<<< HEAD
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of char: %lu byte(s)\n", (unsigned long)sizeof(f));
=======
printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(a));
printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(b));
printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(c));
printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(d));
printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(f));
>>>>>>> d2d9faedeadd6aafc622ed2906d4dd443c3d951c
return (0);
}
