#include <fstream>
#include <cmath>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

long long int MAX,i,a[10000],p,j,k,ok,cnt;

int main()
{
    f>>k;
    MAX = k * 100;
    //gen vect
    for(i=1; i<=MAX; i++)
        a[i] = i;

    //sortarea numerelor
    for(i=2; i<=sqrt(MAX); i++)
    {
        if(a[i])
        {
            p = 2;
            for(j=i*p; j<=MAX; j=i*p)
            {
                a[j] = 0;
                p++;
            }
        }
    }

    //afisare el prime
    for(i=2; i<=MAX&&!ok; i++)
        if(!a[i])
        {
            cnt = 0;
            ok = 1;
            for(j=2; cnt<k&&ok; j++)
            {
                if(i%a[j])
                    ok = 0;
                cnt++;
            }

            if(ok)
                g<<i;
        }
    //g<<k;
    return 0;
}
