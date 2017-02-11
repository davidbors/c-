// 2 nr aproape identice(ai) daca au ac nr de cifr si & exista 1 singura poz in cele 2 nr in care cifr sunt distincte si dif absoluta
//a cifrelor este 1;
// Un sir de nr nat form o mult de nr aproape identice daca nr din sir sunt distincte 2 cate 2 si oricare 2 nr aflate pe poz consec
// in sir sunt ai;
/// date.in --- prima linie n; 2a linie siru; n<=50; sirul e ai sau nu
/// se afiseaza da / nu

#include <iostream>
#include<fstream>
#include<cmath>
using namespace std;
int n,v[50];
ifstream f("date.in");
ofstream g("date.out");
void citire(int z[100],int x)
{
    int i=0;
    while(x>0 && f>>z[i++])
        x--;
}
void afisare(int z[100],int x)
{
    int i=0;
    while(x>0 && g<<z[i++]<<" ")
        x--;
}
int distincte(int z[100],int x)
{
    int i,j;
    for(i = 0; i<x-1; i++)
        for(j=i+1; j<x; j++)
            if(z[i]==z[j])
                return 0;
    return 1;
}
int nrcif(long int a)
{
    int c = 0;
    while(a)
    {
        c++;
        a /= 10;
    }
    return c;
}
int ai(int a, int b)
{
    int c = 0;
    if(nrcif(a)==nrcif(b))
    {
        while(a)
        {
            if(a%10!=b%10)
            {
                if(abs(a-b)!=1)
                    return 0;
                else
                    c++;
            }
            a /= 10;
            b /= 10;
        }
        if(c!=1)
            return 0;
        else
            return 1;
    }
    else
        return 0;

}
int verificare(int z[100], int x)
{
    int i;
    if(distincte(z,x))
    {
        for(i = 0; i < x-1; i++)
            if(!ai(z[i],z[i+1]))
                return 0;
        return 1;
    }
    else
        return 0;
}
int main()
{
    f>>n;
    citire(v,n);
    g << (verificare(v,n) ? "DA" : "NU");
    f.close();
    g.close();
    return 0;
}
