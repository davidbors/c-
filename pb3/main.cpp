/**
sa se ver daca o matr patr cu dim n*n este:
a) sim fata de axa orizontala
b) sim fata de axa verticala
c) sim fata de diag principala
d) sim fata de diag sec
 *
 */


#include <fstream>
#include <cmath>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,i,j,a[100][100],ok,i2,var,j2;


int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    ok = 1;
    if(n%2)
    {n++; var = n/2 + 1;}
    else
    var = n/2 + 1;
    for(i=1,i2=var; i<var&&ok; i++,i2++)
        for(j=1; j<=n&&ok; j++)
            if(a[i][j]!=a[i2][j])
                ok = 0;
    if(ok)
        g<<"a) DA";
    else
        g<<"a) NU";
    g<<'\n';
    ok = 1;
    for(i=1;i<=n&&ok;i++)
        for(j=1,j2=var;j<var&&ok;j++,j2++)
            if(a[i][j]!=a[i][j2])
                ok = 0;
    if(ok)
        g<<"b) DA";
    else
        g<<"b) NU";
    g<<'\n';
    ok = 1;
    for(i=1;i<=n&&ok;i++)
        for(j=1;j<=n&&ok;j++)
            if(i<j&&a[i][j]!=a[j][i])
                ok = 0;
    if(ok)
        g<<"c) DA";
    else
        g<<"c) NU";
    g<<'\n';
    ok = 1;
    for(i=1;i<=n&&ok;i++)
        for(j=1;j<=n&&ok;j++)
            if(i+j>n+1&&a[i][j]!=a[n-i+1][n-j+1])
                ok = 0;
    if(ok)
        g<<"d) DA";
    else
        g<<"d) NU";
    return 0;
}
