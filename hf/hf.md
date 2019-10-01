*A lenti példa célja segíteni megérteni, hogy hogyan néz ki egy prog1 házi feladat és ez alapján egyéni ötletek alapján kitalálni a Ti saját feladatotokat. A nehézség és tartalom kapcsán segítek, szükség esetén könnyítünk / nehezítünk rajta, Nektek elsősorban az ötleteket kell először meghatározni.*

[Házi feladat általános tudnivalók](https://moodle.hit.bme.hu/mod/page/view.php?id=8082)

# Példa házi feladat: Webshop
## Rövid leírás
A házi feladat célja egy olyan konzolos program elkészítése, amely egy webshopot modellez. A webshopban sokféle termék között lehet böngészni, keresni. A megtetszett termékekből a raktárkészlet erejéig betehetünk darabokat a virtuális kosarunkba. A vásárlás végeztével fizetés után levonódnak a raktárkészletből a megvásárolt tételek.
## Adatszerkezetek
### Kategória
Többféle termék kategóriánk van a webshopban. Minden egyes termék pontosan egy kategóriában szerepel. Minden egyes kategóriáról tároljuk:
- egyedi azonosítószámát (pozitív egész szám)
- nevét (szöveg, ékezetek nélkül)

Példa: ```12 Sport```

Tehát a 12-es azonosítójú kategória neve *Sport*, vagyis ide a sportfelszerelések fognak kerülni.

### Termék
Egy adott termékről tárolni fogjuk:
- egyedi azonosítószámát (pozitív egész szám)
- kategóriájának egyedi azonosítóját (pozitív egész szám)
- egységárát (pozitív egész szám, Forint)
- raktárkészleten lévő mennyiséget (nemnegatív egész szám)
- nevét (szöveg, ékezetek nélkül)

Példa: ```1234 12 4000 9 Focilabda```

Tehát a 1234-es azonosítójú termék a 12-es azonosítójú kategóriába tartozik (Sport), egységára 4000 Ft, jelenleg 9 darab van raktáron és Focilabda a neve.

## A program működése
### Termékek böngészése, keresése
Először böngészni, keresni kell az elérhető termékek között. Ha egy termék megtetszett, akkor betehetjük a virtuális kosarunkba. A kosárból kivehetünk termékeket, ha meggondoljuk magunkat. Ha úgy érezzük, végeztünk a válogatással, akkor kifizetjük a kosárban lévő termékeket. Ekkor levonjuk a raktárkészletből a megvásárolt mennyiségeket.
#### Böngészés
Ha böngészni szeretnénk a termékek között, akkor a program kilistázza az összes kategóriát és a felhasználó választ ezek közül. A választásnak megfelelő kategóriában lévő összes terméket kilistázza a program.
#### Keresés
Keresni is lehet a termékek között. A keresés összetettsége a specifikációban kerül rögzítésre. **Például keresünk olyan termékeket, amik a *Sport* vagy *Divat* kategóriába tartozik, az egységára kevesebb, mint 10000 Ft és legalább 3 darab van raktáron.** Ha van(nak) a keresésnek megfelelő termék(ek), akkor kilistázzuk. Ha nincs, akkor jelezzük a vásárlónak, hogy nincs a keresésnek megfelelő termék.
### Virtuális kosár
Minden egyes böngészés vagy keresés után a program felkínálja a lehetőséget a vásárlónak, hogy egyedi azonosítószám alapján egy-egy adott termékből a kívánt mennyiséget berakja a kosárba. Ha nem kíván élni a lehetőséggel, akkor egyedi azonosítószám alapján kivehet terméket a kosárból, indíthat újabb böngészést, keresést vagy befejezheti a vásárlást és fizethet.