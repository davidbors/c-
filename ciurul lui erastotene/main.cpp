#include <fstream>
#include <cmath>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

long long int MAX,i,a[10000000],p,j,k;

int main()
{
    f>>MAX;

    //gen vect
    for(i=1;i<=MAX;i++)
        a[i] = i;

    //sortarea numerelor
    for(i=2;i<=sqrt(MAX);i++)
    {
        if(a[i])
        {
            p = 2;
            for(j=i*p;j<=MAX;j=i*p)
               {
                   a[j] = 0;
                   p++;
               }
        }
    }

    //afisare el prime
    for(i=2;i<=MAX;i++)
        if(a[i])
           {
               g<<a[i]<<" ";
               k++;
               if(k==10)
               {
                   g<<'\n'; k=0;
               }
           }
    //g<<k;
    return 0;
}
