// n trebuie verificat daca e nr special, sau gigel introduce doar nr speciale????
/* Gigel este un elev fascinat de matematică. Jucându-se cu numerele a descoperit că anumite numere au proprietăţi speciale. Numărul special al lui Gigel este orice număr care începe cu cifra 2 şi este urmat de un număr oarecare de cifre de 3.
Cerinţă:  Să se determine pătratul unui număr care îndeplineşte condiţia din enunţ.
Date de intrare: În fişierul numar.in este scris un număr natural n cu minim 2 cifre şi maxim 100 cifre. Numărul începe cu cifra 2, cifrele următoare fiind toate egale cu 3.
Date de ieşire: În fişierul patrat.out este scris pătratul numărului n.
Precizare: Se garantează că numărul n îndeplineşte condiţia de număr special din enunţ.
*/

#include <iostream>
#include <fstream>
#include <math.h>



using namespace std;
ifstream f("numar1.in");
ofstream g("patrat.out");
int n;
int main()
{
    f>>n;
    g<<n*n;

    return 0;
    f.close();
    g.close();
}
