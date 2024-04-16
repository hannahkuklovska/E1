# Newtonova metóda pre hľadanie n-tej odmocniny

 Tento kód implementuje Newtonovu metódu na hľadanie n-tej odmocniny čísla. Táto metóda sa používa na numerické hľadanie koreňa rovnice, konkrétne hľadanie riešenia rovnice \( f(x) = 0 \).


 ### Funkcia `mocnina`

 Funkcia `mocnina` slúži na výpočet mocniny čísla `mocnenec` umocneného na zadaný `exponent`. Funkcia sa stará aj o záporné exponenty, kde číslo `mocnenec` umocňuje na zápornú hodnotu `exponent` -1 krát.

 ### Funkcia `mta_odmocnina`

 Funkcia `mta_odmocnina` implementuje Newtonovu metódu na hľadanie m-tej odmocniny z čísla `x`. Postupne aproximuje hodnotu odhadu koreňa, kým sa nepriblíži k dostatočne presnej hodnote s ohľadom na definovanú toleranciu `TOL`.

 ## Spustenie

 Kód obsahuje hlavný `main` program, ktorý demonštruje použitie funkcie `mta_odmocnina` na vypočítanie m-tej odmocniny z čísla `x`. Stačí spustiť program a výsledok bude vypísaný na štandardný výstup.

 ## Vstupy a Výstupy

 - `x`: Číslo, z ktorého sa hľadá odmocnina.
 - `m`: Úroveň odmocniny.
 - `res`: Pointer na adresu, do ktorej bude uložený výsledok hľadania odmocniny.

 ## Príklad použitia

 ```c
 double x = 16;
 int n = 2;
 double res;

 mta_odmocnina(n, x, &res);

 printf("Výsledok hľadania %d-tej odmocniny z %.2f je: %.4f\n", n, x, res);
