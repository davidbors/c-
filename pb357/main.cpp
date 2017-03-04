#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int a[100][100],i,j,n;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            f>>a[i][j];
    //acopar matricea
    for(i=0;i<=n+1;i++)
    {
        a[0][i] = 10000;
        a[n+1][i] = 10000;
    }
    for(i=1;i<=n;i++)
    {
        a[i][0] = 10000;
        a[i][n+1] = 10000;
    }
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
            if(a[i][j]<a[i-1][j]&&a[i][j]<a[i+1][j]&&a[i][j]<a[i][j+1]&&a[i][j]<a[i][j-1])
                g<<a[i][j]<<" ";
    return 0;
}
