#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	// Változók
	int szam1, szam2;
	int i;
	int j;
	int lnko = 1;

	// Kommunikáció a felhasználóval
    printf("Adj meg ket egesz szamot : ");
	scanf("%d %d", &szam1, &szam2);

	// Legnagyobb közös osztó keresése
	for (i = 1; i <= szam1; i++)
	{
		if ((szam1 % i == 0) && (szam2 % i == 0))
		{
			lnko = i;
		}
	}
	printf("Legnagyobb kozos osztojuk: %d", lnko);
	return 0;
}