#include <iostream>
#include <fstream>

using namespace std;

int st[100],n,solutii,p;

ifstream f("pangol.in");
ofstream g("pangol.out");

int valid(int k)
{
    if(k>n)
        return 0;
    for(int i = 1; i < k; i++)
        if(st[i]==st[k])
            return 0;
   // if(k>1&&st[k]<=st[k-1]) return 0;
    return 1;
}

int solutie(int k)
{
    if(k!=n) //pt comb k!=p
        return 0;
    return 1;
}

void afiseaza(int k)
{
    solutii++;
    for(int i = 1; i <= k; i++)
        cout<<st[i]<<" ";
    cout<<'\n';
}

void bkt(int k)
{
    for(int i = 1; i <= n; i++)
    {
        st[k]=i;
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
    //f>>n;
    //f>>n>>p;
    n = 3;
    bkt(1);
    g<<'\n';
    g<<solutii;
    return 0;
}
