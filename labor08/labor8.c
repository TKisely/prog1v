#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

/*
V�rhat� beugr�t�ma: Dinamikusan mem�ri�t foglal� f�ggv�ny �r�sa. pl. �rjon f�ggv�nyt, mely param�terk�nt kapott sz�m� eg�sznek foglal dinamikusan mem�ri�t, �s visszat�r a t�mb kezd�c�m�vel.
*/

int* tomb_foglalas(int darabszam, int ertek)
{
	int i;
	int* tomb = (int*)malloc(sizeof(int) * darabszam);
	if (tomb == NULL) // nem siker�lt mem�ri�t foglalni
	{
		return NULL;
	}

	for (i = 0; i < darabszam; i++)
	{
		tomb[i] = ertek;
	}

	return tomb; // &tomb[0]
}

int main()
{
	/*
	int i;
	int* tomb;
	tomb = tomb_foglalas(10, 3);
	if (tomb == NULL)
	{
		printf("nem siker�lt mem�ri�t foglalni\n");
	}
	else {
		for (i = 0; i < 10; i++)
		{
			printf("%d ", tomb[i]);
		}
	}
	free(tomb);
	*/

	FILE* fajl;
	FILE* kimeneti_fajl;
	double bemenet;
	fajl = fopen("szamok.txt", "r");
	kimeneti_fajl = fopen("pozitivszamok.txt", "w");
	if (fajl == NULL)
	{
		printf("Nem sikerult megnyitni: szamok.txt\n");
	}
	else if (kimeneti_fajl == NULL)
	{
		printf("Nem sikerult megnyitni: pozitivszamok.txt\n");
	}
	else {
		// honnan, milyen form�ban, hova
		//fscanf(fajl, "%d %d", &egesz1, &egesz2) == 2
		while (fscanf(fajl, "%lf", &bemenet) == 1)
		{
			if (bemenet > 0.0)
			{
				fprintf(kimeneti_fajl, "%lf ", bemenet);
			}
		}
	}
	fclose(fajl);
	fclose(kimeneti_fajl);
	return 0;
}