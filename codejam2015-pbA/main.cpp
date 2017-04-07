#include <fstream>
#include <iostream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

long long int fr[10],n,k;

int valid()
{
    for(int i=0; i < 10; i++)
        if(fr[i]==0)
            return 1;
    return 0;
}
long long int t,nx,aux;
int main()
{
    f>>t;
    long long int tx = t;
    while(t) {
    nx = 0;
    aux = 0;
    f>>n;
    nx = n;
    k = 1;
    if(n)
    {
        while(valid()==1)
        {
            aux = nx;
            while(aux)
            {
                fr[aux%10] = 1;
                aux /= 10;
            }
            k++;
            cout<<nx;
            nx = n * k;
        }
        g<<"Case #"<<tx - t + 1<<": "<<nx - n<<'\n';
        for(int i=0;i<10;i++)
            fr[i] = 0;
    }
    else
    {
        g<<"Case #"<<tx - t + 1<<": "<<"INSOMNIA"<<'\n';
    }
    t--;
    }
    return 0;
}
