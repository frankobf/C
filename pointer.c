#include <stdio.h>

void main (void)
{
	int target, source;
	int *m;

	source = 10;  // recebe o valor.

	m = &source;  // m recebe o endereço de source.

	target = *m;  // recebe o valor de source pelo ponteiro *m.

	printf("%d \n", target);

}