#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,j,a[21][21],k,i;

int main()
{
    f>>n;
    /*  for(j=1;j<=n;j++)
          a[1][j] = j; */
    for(i=1; i<=n; i++)
    {
        k = i;
        for(j=1; j<=n; j++)
        {
            if(k>n)
                k = 1;
            a[i][j] = k;
            k++;
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
