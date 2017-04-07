#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("pangol.in");
ofstream g("pangol.out");

vector<int> v(0);
char c[100];
int st[100];

int nume,cost,n;

int valid(int k)
{
    if(k>n)
        return 0;
    return 1;
}

int solutie(int k)
{
    int c = 0, ok = 0;
    for(int i = 1; i < k; i++)
    {
        if(st[i]==0)
            c++;
        if(st[i]==st[i+1]&&st[i]==0)
            ok = 1;
    }
    if(st[k]==0)
        c++;
    return (c==3&&ok==1);
}

void afiseaza(int k){
    for(int i = 1; i <= 5; i++)
        g<<st[i];
    g<<'\n';
}

void bkt(int k)
{
   for(int i = 0; i <= 9; i++)
    {
        st[k]=i;
        if(valid(k))
        {
            if(solutie(k))
                afiseaza(k);
            else
                bkt(k+1);
        }
    }
}

int main()
{
    f>>n;
    for(int i = 1; i <= n; i++)
        f>>cost,
        v.push_back(cost);
    bkt(1);
    return 0;
}
