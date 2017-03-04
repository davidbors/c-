/**
    se considera 2 vect a si b cu el nr intregi
    el aranj a i nr impare sunt scrise inaintea orelor pare
    sa se constr vect c care sa contina el din cei 2 vect aranj in ac ordine
*/

#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,m,a[100],b[100],c[200],i2,nc,ok,i;

int main()
{
    f>>n>>m;
    for(i=1; i<=n; i++)
        f>>a[i];
    for(i=1; i<=m; i++)
        f>>b[i];
    while(ok)
    {
        ok = 0;
        for(i=1; i<=n; i++)
            if(a[i]%2!=0)
                c[++nc] = a[i];
            else
            {
                for(i2=i; i2<n; i2++)
                    a[i2] = a[i2+1];
                n--;
                ok++;
            }
        for(i=1; i<=m; i++)
            if(b[i]%2!=0)
                c[++nc] = b[i];
            else
            {
                for(i2=i; i2<m; i2++)
                    b[i2] = b[i2+1];
                m--;
                ok++;
            }
    }
    for(i=1;i<=nc;i++)
        g<<c[i]<<" ";
    return 0;
}
