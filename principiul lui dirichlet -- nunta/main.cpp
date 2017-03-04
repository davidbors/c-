#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,k,ok,sum,i,j,pos[1002];

int main()
{
    f>>n;
    for(k=1; k<=n&&!ok; k++)
    {
        f>>i>>j;
        sum = i + j;
        if(pos[sum]>0)
        {
            ok = 1;
            g<<pos[sum]<<" "<<k;
        }
        else
            pos[sum] = k;
    }
    return 0;
}
