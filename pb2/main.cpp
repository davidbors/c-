/**
    sa se ver ca o matr patr cu dim n*n este matr 0
    matr 0 == are toate el eg cu 0
 */


#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n, i,j,a[100][100],ok;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    ok = 1;
    for(i=1;i<=n&&ok;i++)
        for(j=1;j<=n&&ok;j++)
            if(a[i][j])
                ok = 0;
    if(ok)
        g<<"DA";
    else
        g<<"NU";
    return 0;
}
