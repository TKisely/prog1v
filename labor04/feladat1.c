#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Fibonacci-számok
int main()
{
	int fibonacci[100] = { 0, 1 };
	int i;
	for (i = 2; i < 100; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	// Tömb bejárása a végétõl az eleje felé
	for (i = 99; i >= 0; i--)
	{
		printf("%d ", fibonacci[i]);
	}
	return 0;
}