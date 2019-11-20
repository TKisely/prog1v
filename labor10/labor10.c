#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// Szöveges fájlkezelés
int szoveges_fajlba_iras(char* fajlnev, double tomb[], int meret)
{
	FILE* fajl;
	int i;

	fajl = fopen(fajlnev, "wt"); // t = text
	if (fajl == NULL)
	{
		printf("Nem sikerult megnyitni a %s fajlt.\n", fajlnev);
		return 0;
	}

	for (i = 0; i < meret; i++)
	{
		fprintf(fajl, "%lf ", tomb[i]);
	}

	if (fclose(fajl) != 0)
	{
		printf("Nem sikerult bezarni a %s fajlt.\n", fajlnev);
		return 0;
	}

	return 1; // sikerült minden! :-)
}

// Bináris fájlkezelés
int binaris_fajlba_iras(char* fajlnev, double tomb[], int meret)
{
	FILE* fajl;
	int i;

	fajl = fopen(fajlnev, "wb"); // b = binary
	if (fajl == NULL)
	{
		printf("Nem sikerult megnyitni a %s fajlt.\n", fajlnev);
		return 0;
	}

	fwrite(tomb, sizeof(double), meret, fajl);
	/*
	for (i = 0; i < meret; i++)
	{
		//fprintf(fajl, "%lf ", tomb[i]);
		if (fwrite((&tomb[i]), sizeof(double), 1, fajl) != 1)
		{
			printf("Nem sikerult kiirni: %lf\n", tomb[i]);
		}
	}
	*/
	

	if (fclose(fajl) != 0)
	{
		printf("Nem sikerult bezarni a %s fajlt.\n", fajlnev);
		return 0;
	}

	return 1; // sikerült minden! :-)
}

int binaris_fajlbol_olvasas(char* fajlnev)
{
	FILE* fajl;
	double szam;

	fajl = fopen(fajlnev, "rb"); // read binary
	if (fajl == NULL)
	{
		printf("Nem sikerult megnyitni a %s fajlt.\n", fajlnev);
		return 0;
	}

	while (fread(&szam, sizeof(double), 1, fajl) == 1)
	{
		printf("%lf ", szam);
	}

	if (fclose(fajl) != 0)
	{
		printf("Nem sikerult bezarni a %s fajlt.\n", fajlnev);
		return 0;
	}

	return 1;
}

int main()
{
	double tomb[5] = { 1.0, 2.0, 3.14, 4.0, 5.9 };
	if (szoveges_fajlba_iras("szoveges.txt", tomb, 5) == 0)
	{
		printf("Nem sikerult a szoveges fajlba iras.\n");
	}
	if (binaris_fajlba_iras("binaris.bin", tomb, 5) == 0) // .dat, .bin
	{
		printf("Nem sikerult a binaris fajlba iras.\n");
	}
	if (binaris_fajlbol_olvasas("binaris.bin") == 0)
	{
		printf("Nem sikerult a binaris fajlbol olvasas.\n");
	}
	return 0;
}