#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,k,nrOre;

int main()
{
    f>>n>>k;
    while(n>=k) {
        if(n%2)
            n++;
        else
            n /= 2;
        nrOre++;
    }
    g<<nrOre;
    return 0;
}
