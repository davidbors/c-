#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int mini,m,n,a[32][32],i,j,posi,posj;

int main()
{
    mini = 999999;
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            if(a[i][j]<mini)
            {
                mini = a[i][j];
                posi = i;
                posj = j;
            }

    //el linia --> posi
    for(j=1; j<=n; j++)
        for(i=posi; i<=m; i++)
            a[i][j] = a[i+1][j];
    m--;

    //el col --> posj
    for(i=1; i<=m; i++)
        for(j=posj; j<=n; j++)
            a[i][j] = a[i][j+1];
    n--;

    //afis matricea
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }

    return 0;
}
