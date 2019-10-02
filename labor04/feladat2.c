#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

// Végjeles sorozat feldolgozása tömbben
int main()
{
	int pozitivak[20];
	int i;
	int darab = 0;
	int szam;
	int osszesen = 0;

	scanf("%d", &szam);
	while (szam != 0) // Addig olvasunk, amíg nem jött a végjel
	{
		// Feldolgozás
		if (szam > 0)
		{
			pozitivak[darab] = szam;
			darab = darab + 1;
		}
		osszesen = osszesen + 1;
		scanf("%d", &szam);
	}
	printf("Osszesen %d darab szam erkezett, ebbol %d pozitiv volt.\n", osszesen, darab);
	for (i = 0; i < darab; i++)
	{
		printf("%d ", pozitivak[i]);
	}
	return 0;
}