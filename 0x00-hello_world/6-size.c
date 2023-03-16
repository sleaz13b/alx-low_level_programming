#include <stdio.h>
/*
 * main - entry point
 *
 * Description: using sizeof to print the various types
 *
 * Return: always(0) success
 */
int main(void)
{
	/*sizeof evaluates zize of variable*/
	printf("Size of a char:%lu byte(s)\n" sizeof (char));
	printf("Size of an int:%lu byte(s)\n" sizeof (int));
	printf("Size of a long int:%lu byte(s)\n" sizeof (long int));
	printf("Size of a long long int:%lu byte(s)\n" sizeof (long long int));
	printf("Size of a float:%lu byte(s)\n" sizeof (float));

	return (0);
}
