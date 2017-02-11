#include <iostream>
#include <fstream>
#include <cmath>


using namespace std;
ifstream f("date.in");
ofstream g("date.out");

unsigned long long n,i,s,rad,delta,nrgr,pozgr,nr;

int sum(int x){
   int ss = 0;/*
    for(i=1; i<=x; i++)
        ss+=i;*/
    ss = (x*(x+1))/2;
    return ss;
}

int main()
{
    f>>n;

    for(i=1; s<n; i++)
    {s += i; nrgr++;}
    nr = n - sum(nrgr-1);
    g<<nrgr<<endl<<nr;
    return 0;
}
