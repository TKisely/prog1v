#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Fibonacci-sz�mok
int main()
{
	int fibonacci[100] = { 0, 1 };
	int i;
	for (i = 2; i < 100; i++)
	{
		fibonacci[i] = fibonacci[i - 1] + fibonacci[i - 2];
	}
	// T�mb bej�r�sa a v�g�t�l az eleje fel�
	for (i = 99; i >= 0; i--)
	{
		printf("%d ", fibonacci[i]);
	}
	return 0;
}