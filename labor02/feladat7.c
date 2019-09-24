#include <stdio.h>

// 7. feladat: négyzetszám-e?
int main()
{
    // Változók
    int szam;
    int negyzet_e;
    int gyok;
    int i;

    // Kommunikáció a felhasználóval
    printf("Irj be egy pozitiv egesz szamot: ");
    scanf("%d", &szam);
    printf("\n");

    // Feladat megoldása
    negyzet_e = 0; // Tegyük fel, hogy nem négyzetszám
    for(i = 1; i <= szam; i++)
    {
        if(i*i == szam)
        {
            negyzet_e = 1; // Mégis négyzetszám
            gyok = i; // Ennek a számnak a négyzete a beírt szám
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
