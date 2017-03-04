#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int m,n,ok,a[100][100],i,j;

int main()
{
    f>>m>>n;
    for(i=1;i<=m;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    ok = 1;
    for(j=1;j<=n;j++)
    {
        ok = 1;
       for(i=1;i<=m;i++)
            if(a[i][j]==0)
                ok = 0;
       if(ok)
        g<<j<<" ";
    }

  /*  for(j=1;j<=m;j++)
    {for(i=1;i<=m;i++)
        g<<a[i][j]<<" ";
    g<<"\n";
    } */
    return 0;
}
