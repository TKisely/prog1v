#include <stdio.h>

// prog1v
// 5. labor
// 1. feladat
// b részfeladat

int lnko_keresese(int a, int b)
{
    int i;
    int lnko = 1;
    for(i = 1; i <= a; i++)
    {
        if((a % i == 0) && (b % i == 0)) // ha közös osztó
        {
            lnko = i; // új lnko
        }
    }
    return lnko;
}

int main()
{
    int bemenet_a;
    int bemenet_b;
    int lnko;
    // Függvény bemenetének előkészítése
    printf("Adj meg ket szamot: ");
    scanf("%d %d", &bemenet_a, &bemenet_b);
    // Függvényhívás
    lnko = lnko_keresese(bemenet_a, bemenet_b);
    // Visszatérési érték értelmezése
    printf("Legnagyob kozos osztojuk: %d", lnko);
    return 0;
}
