#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int m,n,i,j,a[10][10],b[10][10],k;

int main()
{
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    k = 1;
    for(j=n; j>=1; j--)
    {
        for(i=1; i<=m; i++)
            b[k][i] = a[i][j];
        k++;
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            g<<b[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
