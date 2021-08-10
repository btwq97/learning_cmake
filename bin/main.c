#include <stdio.h>
#include "adder.h"
#include "subtract.h"

int main(void)
{
	// print hello world
	printf("Hello world\n");
	
	// test adder
	float ans = adder(3.3, 6.9);
	printf("adder = %3.1f\n", ans);

	// test subtract
	ans = subtract(7.5, 2.9);
	printf("subtract = %3.1f\n", ans);

	return 0;	
}

