#include <stdio.h>

int power(int m, int n);

int main()
{
	int i;

	printf("====================================================\n");
	printf("\n");
	
	for(i = 0; i < 50; ++i)
	{
		printf("i = %3d || 2^i =  %11d || -3^i =  %11d\n", i, power(2,i), power(-3,i));
	}

	printf("\n");
	printf("====================================================\n");

	return 0;
}

int power(int base, int n)
{
	int i, p;

	p = 1;
	for(i = 1; i <= n; ++i)
	{
		p = p * base;
	}

	return p;
}
