#include <iostream>
#include <fstream>

using namespace std;

ifstream f("concurs.in");
ofstream g("concurs.out");

int n,i,j,c[100],p[100],kc,kp,n3,n2,k,i2;

int main()
{
    f>>n;

    //kc = kp = 0;
    for(i=1; i<=n/2; i++)
    {
        f>>i2>>j>>k;
        /**< switch mai eficien? */
        if(k==i2)
        {
            c[++kc] = i2;
            p[++kp] = j;
        }
        else
        {
            c[++kc] = j;
            p[++kp] = i2;
        }
    }
    n2 = kc;

    // ordon cresc
    for(i=1; i<n2; i++)
        for(j=i+1; j<=n2; j++)
            if(c[i]>c[j])
                swap(c[i],c[j]);
    for(i=1; i<n2; i++)
        for(j=i+1; j<=n2; j++)
            if(p[i]>p[j])
                swap(p[i],p[j]);

    for(i=1; i<=n2; i++)
        g<<c[i]<<" ";
    g<<'\n';

    /**< ? eficient for compus/2 x for */
    for(i=1,j=n2/2+1; i<=n2/2&&j<=n; i++,j++)
    {
        g<<c[i]<<' '<<c[j]<<'\n';
        g<<p[i]<<' '<<p[j]<<'\n';
    }
    return 0;
}
