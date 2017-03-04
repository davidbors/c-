#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,ok;
long long int i;

int cif(int nr){
    int ok = 1;
    while(ok&&nr){
        if(nr%10!=0&&nr%10!=1)
            ok = 0;
        nr /= 10;
    }
    return ok;
}

int main()
{
    f>>n;
    for(i=n+1;!ok;i++)
        if(i%n==0&&cif(i))
            ok = 1;
    g<<i-1;
    return 0;
}
