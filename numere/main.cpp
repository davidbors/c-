#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

long long int n,aux,bux,i,ok,nr,p,nr2;

int main()
{
    f>>n;
    aux = n;
    bux = n;
    p = 1;
    while(aux>1&&p){
    ok = 1;
    for(i=9;i>1&&ok;i--)
        if(aux%i==0)
        {
            nr = i * p + nr;
            p *= 10;
            aux /= i;
            ok = 0;
        } else {
            if(i==2){
            nr = 0;
            p = 0;}
        }
    }
    g<<nr;
    g<<' ';
    if(p)
    p = 1;
    while(bux>1&&p){
    ok = 1;
    for(i=2;i<10&&ok;i++)
        if(bux%i==0)
        {
            nr2 = i * p + nr2;
            p *= 10;
            bux /= i;
            ok = 0;
        } else {
            if(i==9){
            nr2 = 0;
            p = 0;}
        }
    }
    if(p)
    g<<nr2;
    return 0;
}
