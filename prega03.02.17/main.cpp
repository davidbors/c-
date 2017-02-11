#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,v[25],pozini,pozfin,i,c,maxi;

int main()
{
    f>>n;
    f>>v[0];
    pozini = 0;
    for(i=1;i<n;i++)
    {
        f>>v[i];
        if(v[i-1]%2!=v[i]%2)
                c++;
        else {
            if(maxi<c)
               {
                   maxi = c;
                   pozini = i - c;
                   pozfin = i - 1;
               }
            c = 1;
        }
    }
    if(maxi < c)
        maxi = c;
    for(i = pozini; i<=pozfin; i++)
        g<<v[i]<<" ";
    f.close();g.close();
    return 0;
}
