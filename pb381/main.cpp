#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int a[32][32],m,n,p,q,i,j;

int main()
{
    f>>m>>n>>p>>q;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    for(i=1;i<=m;i++)
        swap(a[i][p],a[i][q]);
    for(i=1;i<=m;i++)
    {
        for(j=1;j<=n;j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
