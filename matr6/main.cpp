//intr o fabrica lucreaza n munictori
//in fct de calificare fiecarui muncitor i se atrb o categ salariala
//exis 5 categ sal p1-p5
//val cuprn intre 1-3
//un sal tarf de baza pe ora
//se mem orele lcrte
//se mem categ salariala
//sal brut este dat de prds (nr ore lucrate * categ sal * sal tarf pe ora
//sal net se obt prin red impztului de 16%
//nr n, val din cei doi vectori, val pt categ sal p1-p5, sal tarf orar
//afl sal brut si sal net al fiecarui muncitor si totalul sal brute pt toti cei n muncitori
#include <iostream>
#include <fstream>
using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>ore[i];
    for(i=1;i<=n;i++)
        f>>cat[i];
    f>>sal;
    for(i=1;i<=n;i++){
        sb = ore[i]*cat[i]*sal;
        sn = sb - (16*sb)/100;
        ssb += sb;
        g<<sb<<" "<<sn<<'\n';
    }
    g<<ssb;
    return 0;
}
