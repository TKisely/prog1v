#include <stdio.h>

// 8. feladat: Növekvő lépésközzel számok kiírása
int main()
{
    // Változók
    int i;
    int also;
    int felso;
    int lepeskoz;

    // Kommunikáció a felhasználóval
    printf("Also es felso korlat: also felso formatumban: ");
    scanf("%d %d", &also, &felso);
    printf("%d es %d kozotti szamok novekvo lepeskozzel:\n", also, felso);

    // Feladat megoldása
    lepeskoz = 0;
    for(i = also; i <= felso; i += lepeskoz)
    {
        printf("%d ", i);
        lepeskoz += 1;
    }
    return 0;
}
