#include <fstream>

using namespace std;

ifstream f("arc.in");
ofstream g("arc.out");

int n,V,i,v[10000],nrsecv,secv,pos,j,ok,maxi;

int main()
{
    f>>V>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    if(V==1)
    {
        for(i=1; i<=n; i++)
            if(v[i]!=v[i-1])
                nrsecv++;
        g<<nrsecv;
    }
    else
    {
        ok = 1;
        while(ok)
        {
            ok = maxi = 0;
            //cauta secv max
            for(j=1; j<=n; j++)
            {
                if(v[j]==v[j-1])
                    secv++;
                else
                {
                    if(secv>maxi&&secv>2)
                        maxi = secv;
                    secv = 1;

                }
            }
            secv = 1;

            for(i=2; i<n; i++)
            {

                if(v[i]==v[i+1])
                    secv++;
                else
                {
                    if(secv==maxi)
                    {
                        //el secv
                        while(secv)
                        {
                            pos = i - 1;
                            for(j=pos; j<n; j++)
                                v[j] = v[j+1];
                            n--;
                            i--;
                            secv--;
                        }
                        ok = 1;
                    }
                    secv = 1;
                }
            }
        }
        g<<n<<'\n';
        for(i=1; i<=n; i++)
            g<<v[i]<<"\n";
    }
    return 0;
}
