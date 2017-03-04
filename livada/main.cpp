#include <fstream>
#include <iostream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

long long int ma[100][100];

long long int i,p,j,n,m,maj,nrmaj,rmaj,k=1,maxi;

int main()
{
    f>>m>>n>>p;
    /**
    m = randuri
    n = pomi/rand
    p = soiuri
    */
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>ma[i][j];

    for(i=1; i<=m; i++)
    {
        maj = 1;
        nrmaj = ma[i][1];
        for(j=2; j<=n; j++)
        {
            if(ma[i][j]==nrmaj)
                maj ++;
            else
            {
                maj--;
            }
            if(maj == 0)
            {
                nrmaj = ma[i][j];
                maj = 1;
            }
        }
        maj = 0;
        for(j=1; j<=n; j++)
        {
            if(nrmaj == ma[i][j])
                maj++;
            if(j<n)
            {
                if(ma[i][j]==ma[i][j+1])
                    k++;
                else k = 1;
                if(k>maxi)
                    maxi = k;
            }
        }
        k = 1;
        if(maj == (n/2)+1 )
            rmaj ++;
    }
    /* for(i=1; i<=m; i++)
         for(j=1; j<=n; j++)
         {
             g<<ma[i][j]<<" ";
             if(j==n) g<<'\n';
         } */
    g<<rmaj<<'\n'<<maxi;
    return 0;
}
