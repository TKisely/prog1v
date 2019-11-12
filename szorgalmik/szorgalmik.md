# Szorgalmi feladatok
A szorgalmi feladatok célja a gyakorlás és bónusz pontok szerzése mellett a nagy ZH-ra és a házi feladatra való önálló gyakorlás is. Emiatt olyan feladatok szerepelnek itt, amik a házi feladat során is hasznosíthatóak.

Minden egyes szorgalmi feladat **egyenként 1 pontot ér** és egymástól teljesen függetlenül megoldhatók.

**Egységes határidő mindháromra: 14. hét péntek éjfél.**
## 1. szorgalmi feladat: Szöveg feldolgozása
Adott az alábbi szöveg, egyetlen sztring:
```
a tigris ragadozo allat.a tigris    ezert fokent hust eszik!!44!!!Zoldseget pedig keveset,gyumolcsot meg annyit se.na de egeszseges ez igy   ???!
```
A szöveg megfelelő módosításával a következő a cél:
```
A tigris ragadozo allat. A tigris ezert fokent hust eszik! Zoldseget pedig keveset, gyumolcsot meg annyit se. Na de egeszseges ez igy?
```
Vagyis a cél:
1. Minden mondat nagy kezdőbetűvel kezdődjön.
2. Minden egyes mondatvégi írásjel után legyen egy szóköz.
3. A mondatok végén pontosan egy darab mondatvégi írásjel lehet (*!!44!!! --> !*).
4. Minden egyes vessző után legyen szóköz.
5. Két szó között pontosan egyetlen szóköz legyen.

Ezeken kívül a bemeneti sztringből egy olyan tömböt (sztringek tömbje) kell előállítani, ahol minden egyes tömbelem egy külön, önálló mondat, vagyis valami ilyesmi:
```
{
"A tigris ragadozo allat. ",
"A tigris ezert fokent hust eszik! ",
"Zoldseget pedig keveset, gyumolcsot meg annyit se. ",
"Na de egeszseges ez igy? "
}
```
## 2. szorgalmi feladat
*Hamarosan...*
## 3. szorgalmi feladat
*Hamarosan...*