#include <fstream>
using namespace std;

int main()
{
    ifstream f("numar.in");
    ofstream g("numar.ok");
    int n,nf;
    f>>n;
    n=n+1;
    if(n%4==1)
            nf=3;
    else if(n%4==2)
            nf=9;
    else if(n%4==3)
            nf=7;
    else nf=1;
    nf=(nf-1)/2-1;
    if(nf==-1)
        nf=9;

    g<<nf;
    f.close();
    g.close();



    return 0;
}
