#include <fstream>

using namespace std;

ifstream f("date.im");
ofstream g("date.out");

int n,v[100],li,ls,i,m,ok,x;

int main()
{
    f>>x;
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    li = 1;
    ls = n;
    int ok,ok1,k=0;
    ok = 1;
    while(li<=ls&&ok)
    {
        m = (li + ls) / 2;
        if(v[m]==x)
        {
            ok1 = 1;
            for(i=m+1; i<=n&&ok1; i++)
                if(v[i]!=x) ok1 = 0;
                else k++;
            ok1 = 1;
            for(i=m-1; i>0&&ok1; i--)
                if(v[i]!=x) ok1 = 0;
                else k++;
            g<<"Am gasit "<<x<<" pe poz "<<m<<"de "<<k+1<<" ori";
            ok = 0;
        }
        else if(v[m]<x)
            li = m + 1;
        else
            ls = m - 1;
    }
    return 0;
}
