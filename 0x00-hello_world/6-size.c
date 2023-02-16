#include <stdio.h>

/*
 *main - entry point
 *
 * return gives 0 (success)
 */


int main(void)
{
	printf("Size of a char: %c bytes(s)",sizeof(char));
	printf("Size of an int: %d byte(s)",sizeof(int));
	printf("Size of a long int: %ld byte(s)",sizeof(long int));
	printf("Size of a long long int: %lld byte(s)",sizeof(long long int));
	printf("Size of a float: %f byte(s)",sizeof(float));
	return(0);
