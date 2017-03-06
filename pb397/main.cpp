#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int nrcif(int nr)
{
    int s = 0;
    while(nr)
    {
        s++;
        nr /= 10;
    }
    return s;
}

int m,n,i,j,a[100][100],i2,j2,s;

int main()
{
    f>>m>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=m; j++)
            f>>a[i][j];
    for(j=1; j<=m; j++)
    {
        s = 0;
        for(i=1; i<=n; i++)
            s += nrcif(a[i][j]);
        if(s==n)
        {
            //el col
            for(j2=j; j2<m; j2++)
                for(i2=1; i2<=n; i2++)
                    a[i2][j2] = a[i2][j2+1];
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
