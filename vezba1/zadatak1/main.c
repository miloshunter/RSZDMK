#include <stdio.h>

void PrintResult(int res){
	printf("Result: %d\n", c);
}

int main()
{
	int a = 3;
	int b = 8;

	if (a > b){
		c = a-b;
	} else {
		c = b-a;
	}

	PrintResult(c);
	return 0;
}
