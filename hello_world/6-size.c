#include <stdio.h>

/**
 *  * main - Entry point
 *   *
 *    * Return: Always 0 (Success)
 */
int main(void)
{
	char cType;
	int iType;
	long int liType;
	long long int lliType;
	float fType;

	printf("Size of a char: %d byte(s)\n", sizeof(cType));
	printf("Size of an int: %d byte(s)\n", sizeof(iType));
	printf("Size of a long int: %d byte(s)\n", sizeof(liType));
	printf("Size of a long long int: %d byte(s)\n", sizeof(lliType));
	printf("Size of a float: %d byte(s)\n", sizeof(fType));
	return (0);
}
