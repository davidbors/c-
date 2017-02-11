#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int v[24],i,n,j,x1,x2;

int main()
{
    f>>n;
    for(i=1;i<=n;i++){
        f>>x1>>x2;
        for(j=x1;j<=x2;j++)
            v[j]++;
    }
    for(i=1;i<=n;i++)
        g<<v[i]<<" ";
    return 0;
}
