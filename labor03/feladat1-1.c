#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	// V�ltoz�k
	int szam;
	int i;
	int darab = 0;

	// Kommunik�ci� a felhaszn�l�val
	printf("Adj meg egy egesz szamot: ");
	scanf("%d", &szam);

	// Val�di oszt�k keres�se
	printf("Valodi osztok: ");
	for (i = 2; i < szam; i++)
	{
		if (szam % i == 0) // Oszt�-e?
		{
			printf("%d ", i);
			darab++;
		}
	}
	printf("\n");
	printf("Valodi osztok szama: %d", darab);
	return 0;
}