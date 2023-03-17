#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/*header added */
/*
 * main - entry point
 *
 * description: print variable n either positive negative
 *
 * return - always (0) success
 */
/* betty style doc for function main goes there- done */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("%d\n" n)
	/* your code goes there */
	return (0);
}
