#include <iostream>
#include <fstream>

using namespace std;

int x,maxi;

int main()
{
    ifstream f("date.in");
    ofstream g("date.out");
    while(f>>x)
        {
            if(x)
                g<<x;
            else
                g<<" ";
        }
    f.close();
    g.close();
    ifstream h("date.out");
    ofstream i("date2.out");
    while(h>>x)
        if(x>maxi)
            maxi = x;
    i<<maxi;
    return 0;
}
