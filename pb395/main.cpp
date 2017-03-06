#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int m,n,a[30][30],i,j,i2,k;

int main()
{
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
        {
            if(a[i][j]<0)
            {
                for(i2=1; i2<=m; i2++)
                    for(k=j; k<n; k++)
                        a[i2][k] = a[i2][k+1];
                n--;
                j--;
            }
        }
    for(i=1; i<=m; i++)
    {
        for(j=1; j<=n; j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }

    return 0;
}
