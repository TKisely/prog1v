#include <stdio.h>

// prog1v
// 5. labor
// 1. feladat

int tokeletes_e(int szam)
{
    int i;
    int osszeg; // Osztók összege
    for(i = 1; i < szam; i++)
    {
        if(szam % i == 0) // ha i osztója szam-nak
        {
            osszeg += i; // osszeg = osszeg + i;
        }
    }

    // Visszatérési érték
    if(osszeg == szam)
    {
        return 1; // ha osszeg == szam, akkor szam tökéletes szám
    }
    else
    {
        return 0; // amúgy nem tökéletes
    }
}

int main()
{
    int bemenet;
    int tokeletesseg;
    // Függvény bemenetének előkészítése
    printf("Adj meg egy szamot: ");
    scanf("%d", &bemenet);
    // Függvényhívás
    tokeletesseg = tokeletes_e(bemenet);
    // Visszatérési érték értelmezése
    if(tokeletesseg == 1)
    {
        printf("Tokeletes");
    }
    else
    {
        printf("Nem tokeletes");
    }
    return 0;
}
