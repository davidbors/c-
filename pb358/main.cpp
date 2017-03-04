#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int i,j,n,s,s2,V,a[100][100],ind,b[100][100];

int main()
{
    f>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    f>>V; //varianta
    if(V == 1) //fol var simpl
    {
        //dp
        for(i=1; i<=n; i++)
            s += a[i][i];
        //ds
        for(ind=0; ind<n; ind++)
            s2 += a[n-ind][1+ind];
        g<<s<<'\n'<<s2;
    }
    else
    {
        j = 0;
        //dp
        for(i=1; i<=n; i++)
            b[1][++j] = a[i][i];
        j = 0;
        for(ind=0; ind<n; ind++)
            b[2][++j] = a[n-ind][1+ind];
        n = j;
        for(i=1; i<=2; i++)
        {
            for(j=1; j<=n; j++)
                s += b[i][j];
            g<<s<<" ";
            s = 0;
        }
    }
    return 0;
}
