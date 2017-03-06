#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int nr,n,m,a[52][52],i,j;

int main()
{
    f>>n>>m;
    for(j=1; j<=m; j++)
        for(i=1; i<=n; i++)
            a[i][j] = ++nr;
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=m; j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
