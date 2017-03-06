#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int m,n,p,maxi,i,j,a[31][31];

int main()
{
    f>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    for(j=1;j<=m;j++)
    {
        p = 1;
        for(i=1;i<=n;i++)
            p *= a[i][j];
        if(p > maxi)
          maxi = p;
    }
        for(j=1;j<=m;j++)
    {
        p = 1;
        for(i=1;i<=n;i++)
            p *= a[i][j];
        if(p == maxi)
          g<<j<<" ";
    }
    return 0;
}
