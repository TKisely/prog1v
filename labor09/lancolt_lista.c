#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
// Beugr�:
typedef struct int_listaelem {
	int szam; // int adat
	struct int_listaelem* kovetkezo; // kov, next
} int_listaelem;
// 9. labor - 1. feladat
typedef struct char_listaelem {
	char karakter; // char adat
	struct char_listaelem* kovetkezo; // kov, next
} char_listaelem;
// void kiir_tomb(int* szamok, int meret)
// void kiir_tomb(int szamok[], int meret)
void kiir_char_lista(char_listaelem* lista)
{
	char_listaelem* le; // lista elemeken v�gigmen� pointer
	// 1. l�p�s: lista elej�re mutatunk
	le = lista;
	if (le == NULL)
	{
		printf("Ures a lista.\n");
	}
	else
	{
		for (le = lista; le != NULL; le = le->kovetkezo)
		{
			// int_listaelem e;
			// e.karakter = 'b';

			// int_listaelem * pe = lista_eleje;
			// (*pe).karakter = 'c';
			// pe->karakter = 'c';
			printf("Listaelem: %c\n", le->karakter);
		}
		printf("\n");
	}
}

char_listaelem* uj_char_listaelem(char c)
{
	// 1. l�p�s: mem. foglal�s
	// int* uj = (int*)malloc(sizeof(int));
	char_listaelem* uj = (char_listaelem*)malloc(sizeof(char_listaelem));
	// 2. l�p�s: adatok t�rol�sa
	uj->karakter = c;
	uj->kovetkezo = NULL;
	// 3. l�p�s: visszat�r�nk az �j elem c�m�vel
	return uj;
}

char_listaelem* lista_elejere_beszuras(char_listaelem* eleje, char c)
{
	char_listaelem* uj_elem = uj_char_listaelem(c);
	uj_elem->kovetkezo = eleje; // �j els� elem mutasson az eddigi els�re
	eleje = uj_elem; // lista eleje legyen az �j elem
	return eleje;
}

char_listaelem* torles(char_listaelem* lista)
{
	if (lista == NULL)
	{
		return NULL;
	}
	else {
		char_listaelem* torlo = lista;
		lista = lista->kovetkezo;
		free(torlo);
		return lista;
	}
}

int main()
{
	// Lista feje: lista elej�re mutat� pointer
	char_listaelem* char_lista = NULL; // �res lista
	//kiir_char_lista(char_lista);

	char_lista = lista_elejere_beszuras(char_lista, 'a');
	char_lista = lista_elejere_beszuras(char_lista, 'b');
	char_lista = lista_elejere_beszuras(char_lista, 'c');
	char_lista = lista_elejere_beszuras(char_lista, 'd');
	char_lista = lista_elejere_beszuras(char_lista, 'e');
	char_lista = lista_elejere_beszuras(char_lista, 'f');
	kiir_char_lista(char_lista);
	char_lista = torles(char_lista);
	kiir_char_lista(char_lista);
	return 0;
}