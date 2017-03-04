//pb-txt : http://olidej.wikispaces.com/file/view/2016_09_p1_teleportare.pdf/575378473/2016_09_p1_teleportare.pdf
//testul 3
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

unsigned long long int V,N,M,i,v[1000000],k,c[1000000],d,ok,cf[1000000],j,maxi;

int main()
{
    f>>V; //cerinta pe care o fac
    f>>N>>M; //nr inm capsule && nr solicitari
    //nr de identificare a clientilor
    for(i=1; i<=M; i++)
        f>>v[i];
    k=0;
    for(i=2; i<=N; i++)
    {
        ok = 1;
        for(d=2; d<=i/2; d++)
            if(i%d==0)
                ok = 0;
        if(ok)
            c[++k]=i;
    }
    for(i=1; i<=M; i++)
    {
        for(j=1; j<=k; j++)
            if(v[i]%c[j]==0)
                cf[j]++;
    }
    if(V==1)
    {
        int csgo = 0;
        for(i=1; i<=k; i++)
            if(cf[i]==0)
                csgo++;
        g<<csgo;
    }
    else
    {
        maxi = cf[1];
        for(i=2;i<=k;i++)
            if(cf[i]>maxi)
                maxi = cf[i];
        for(i=1;i<=k;i++)
            if(cf[i]==maxi)
                g<<c[i]<<" ";
    }
    return 0;
}
