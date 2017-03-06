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
    ok = 1;
    while(ok)
    {
        ok = 0;
        for(i=1; i<n; i++)
        {
            if(a[i][i]>a[i+1][i+1])
            {
                swap(a[i][i],a[i+1][i+1]);
                ok++;
            }
        }
    }
    for(i=1;i<=n;i++)
    {
       for(j=1;j<=n;j++)
            g<<a[i][j]<<" ";
       g<<'\n';
    }

    return 0;
}
