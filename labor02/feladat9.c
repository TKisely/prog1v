#include <stdio.h>

// 9. feladat: Minták kirajzolása
int main()
{
    // Változók
    int i;
    int j;
    int sorok;
    int oszlopok;

    // 9/a részfeladat: teli négyzet
    printf("Teli negyzet:\n");
    sorok = oszlopok = 5;
    for(i = 1; i <= sorok; i++)
    {
        for(j = 1; j <= oszlopok; j++)
        {
            printf("X");
        }
        printf("\n");
    }

    printf("\n");

    // 9/a/2 részfeladat: Teli téglalap
    printf("Teli teglalap:\n");
    sorok = 5;
    oszlopok = 7;
    for(i = 1; i <= sorok; i++)
    {
        for(j = 1; j <= oszlopok; j++)
        {
            printf("X");
        }
        printf("\n");
    }

    printf("\n");

    // 9/b részfeladat: üres négyzet
    printf("Ures negyzet:\n");
    sorok = oszlopok = 5;
    //oszlopok = 11;
    for(i = 1; i <= sorok; i++)
    {
        for(j = 1; j <= oszlopok; j++)
        {
            if(j == 1 || j == oszlopok || i == 1 || i == sorok)
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    printf("\n");

    // 9/c részfeladat: X betű
    printf("X betu:\n");
    sorok = oszlopok = 12;
    for(i = 1; i <= sorok; i++)
    {
        for(j = 1; j <= oszlopok; j++)
        {
            //printf("(%2d,%2d)", i, j);
            if(i == j || ((i+j) == (sorok+1)))
            {
                printf("X");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
