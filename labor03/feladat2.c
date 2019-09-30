#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// 3. labor, 2. feladat
int main()
{
	// Változók
	int i;
	double hatvanyalap;
	double hatvany = 1.0;

	scanf("%lf", &hatvanyalap);
	printf("\n");
	for (i = 1; i <= 10; i++)
	{
		hatvany = hatvany * hatvanyalap;
		printf("%d. hatvany: %lf\n", i, hatvany);
	}

	return 0;
}
