#include <stdio.h>


int main()
{
	int x = 25, *px = &x;

	*px = *px/5;

	printf("%d", x);

	return 0;
}
