//http://olidej.wikispaces.com/file/view/2015_OLI_09_p1_cifru.pdf/572009497/2015_OLI_09_p1_cifru.pdf

#include <iostream>
#include <fstream>
#include <cmath>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,i,v[100],maxi,maxi2,j,ok,d,p1,p2,prm,gasit3,aux1,aux2,nx,gasit,gasit2,pmaxi;

int main()
{
    f>>n;
    for(i=1; i<=n; i++)
        f>>v[i];
    for(i=1; i<=n; i++)
    {
        if(v[i]>maxi)
        {
            maxi2 = maxi;
            maxi = v[i];
        }
        if(sqrt(v[i])==(int)sqrt(v[i]))
        {
            /*  for(j=2; j<=v[i]/2; j++)
              {
                  ok = 1;
                  for(d=2; d<=j/2; d++)
                      if(j%d==0)
                          ok = 0;
                  if(ok)
                  {
                      p2 = p1;
                      p1 = j;
                      if(p1+p2==v[i])
                          prm = v[i];
                  }

              } */
                aux1 = aux2 = nx = v[i]/2;
                //x/2 --> 1
                while(!gasit)
                {
                    aux1--;
                    for(d=2; d<=aux1/2; d++)
                        if(aux1%d==0)
                            gasit = 1;
                }
                //x/2 --> x-2
                while(!gasit2)
                {
                    aux2++;
                    for(d=2; d<=aux2/2; d++)
                        if(aux2%d==0)
                            gasit2 = 1;
                }
                if(aux1+aux2==v[i])
                    if(v[i]>pmaxi)
                        pmaxi = v[i];
            }
        }
    g<<maxi<<" "<<maxi2<<" "<<pmaxi;
    return 0;
}
