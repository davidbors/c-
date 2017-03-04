/**
sa se afis el de pe conturul matr parg lor facandu-se in sens invers trig
*/

#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int i,n,a[100][100],j;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        for(j=1;j<=n;j++)
         f>>a[i][j];
    //prm linie
    for(i=1;i<=n;i++)
        g<<a[1][i]<<" ";
    for(i=2;i<=n;i++)
        g<<a[i][n]<<" ";
    for(i=n-1;i>=1;i--)
        g<<a[n][i]<<" ";
    for(i=n-1;i>=2;i--)
        g<<a[i][1]<<" ";
    return 0;
}
