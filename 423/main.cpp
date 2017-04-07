#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,i,j,a[100][100],ok;

int main()
{
    f>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    ok = 0;
    while(!ok)
    {
        ok = 1;
        for(i=1; i<n; i++)
            if(a[i][n-i+1]<a[i+1][n-i])
            {
                swap(a[i][n-i+1],a[i+1][n-i]);
                ok = 0;
            }
    }
    for(i=1; i<=n; i++)
    {
        for(j=1; j<=n; j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
