#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");
int v[100],n;
void citire(int z[100], int x)
{
    for(int i = 0; i < x; i++)
        f>>z[i];
}
void afisare(int z[100], int x)
{
    for(int i = 0; i < x; i++)
        g<<z[i]<<" ";
}
void citrec(int z[100], int x, int i)
{
    f>>v[x];
    if(i < x)
    citrec(v,x,i++);
}
int main()
{
    f>>n;
    citrec(v,n,0);
    afisare(v,n);
    return 0;
}
