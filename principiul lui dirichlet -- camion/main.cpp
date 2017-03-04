#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int i,n,v[1002],ok,s,j,k;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<n&&!ok;i++){
        s = v[i];
        for(j=i+1;j<=n&&!ok;j++)
    {
        s += v[j];
        if(s%n==0)
           {
              ok = 1;
              for(k=i;k<=j;k++)
                g<<k<<" ";
           }
    }
    }

    return 0;
}
