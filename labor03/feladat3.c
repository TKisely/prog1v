#include <stdio.h>
#include <stdlib.h>

// 3. labor, 3. feladat: PIN k�d
int main()
{
    // V�ltoz�k
    int PIN = 1234;
    int probalkozasok = 1;
    int bemenet;

    // Feladat megold�sa
    printf("Mi a PIN kod?\n");
    while(probalkozasok <= 3)
    {
        printf("%d. alkalom\n", probalkozasok);
        printf("PIN: ");
        scanf("%d", &bemenet);
        if(bemenet == PIN)
        {
            // PIN k�d helyes, nem kell t�bbsz�r bemenetet k�rni
            break;
        }
        else // Helytelen k�dot �rt be a felhaszn�l�
        {
            probalkozasok += 1;
            printf("Helytelen PIN kod!\n");
        }
    }

    if(probalkozasok <= 3)
    {
        printf("A megadott PIN kod helyes.\n");
    }
    else
    {
        printf("Nem sikerult megadni a PIN kodot.\n");
    }
    return 0;
}

