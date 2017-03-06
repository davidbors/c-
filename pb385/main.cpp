#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int m,n,i,j,a[100][100],x,ok;

int main()
{
    f>>m>>n>>x;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    ok = 1;
    for(i=1; i<m&&ok; i++)
        if(a[i][x]>a[i+1][x])
            ok = 0;
    if(ok)
        g<<"DA";
    else
        g<<"NU";

    return 0;
}
