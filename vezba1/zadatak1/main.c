#include <stdio.h>

void PrintResult(int res){
	printf("Result: %d\n", c);
	
	// Izmena 1
}

int Calculation(int a, int b)
{
	if(a > b)
		return a - b;
	else
		return b - a;
	
	// Izmena 2
}

int main()
{
	int a = 3;
	int b = 8;


	PrintResult(Calculation(a, b));

	return 0;
}
