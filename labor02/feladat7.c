#include <stdio.h>

// 7. feladat: n�gyzetsz�m-e?
int main()
{
    // V�ltoz�k
    int szam;
    int negyzet_e;
    int gyok;
    int i;

    // Kommunik�ci� a felhaszn�l�val
    printf("Irj be egy pozitiv egesz szamot: ");
    scanf("%d", &szam);
    printf("\n");

    // Feladat megold�sa
    negyzet_e = 0; // Tegy�k fel, hogy nem n�gyzetsz�m
    for(i = 1; i <= szam; i++)
    {
        if(i*i == szam)
        {
            negyzet_e = 1; // M�gis n�gyzetsz�m
            gyok = i; // Ennek a sz�mnak a n�gyzete a be�rt sz�m
        }
    }
    if(negyzet_e == 1)
    {
        printf("A %d negyzetszam, %d negyzete.\n", szam, gyok);
    }
    else
    {
        printf("A %d nem negyzetszam.\n", szam);
    }
    return 0;
}
