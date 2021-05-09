#include <stdio.h>

int Calculation(int a, int b)
{
	if(a > b)
		return a - b;
	else
		return b - a;
}

int main()
{
	int a = 3;
	int b = 8;

	printf("Result: %d\n", Calculation(a, b));
	
	return 0;
}
