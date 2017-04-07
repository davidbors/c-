#include <iostream>
#include <fstream>

using namespace std;

ifstream f("pangol.in");
ofstream g("pangol.out");

int n,p,st[100],solutii;

int valid(int k)
{
    if(k>p)
        return 0;
    if(k>1&&st[k]<=st[k-1])
        return 0;
    return 1;
}

int solutie(int k)
{
    if(k!=p)
        return 0;
    return 1;
}

void afiseaza(int k)
{
    solutii++;
    for(int i = 1; i <= k; i++)
        g<<st[i]<<" ";
    g<<'\n';
}

void bkt(int k)
{
    for(int i = 1; i <= n; i++)
    {
        st[k] = i;
        if(valid(k))
        {
            if(solutie(k))
                afiseaza(k);
            else
                bkt(k+1);
        }
    }
}

int main()
{
    f>>n>>p;
    bkt(1);
    g<<solutii;
    return 0;
}
