#include <fstream>

using namespace std;

ifstream f("reflexii.in");
ofstream g("reflexii.out");

int L,l;

int main()
{
    f>>L>>l;
    if(L==2*l) {
        g<<1;
        return 0;
    }
    else {
        g<<((L-l)/2) * 6;
    }
    return 0;
}
