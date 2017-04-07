///726 - cul
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int st[100];

int valid(int k)
{
    if(k>5)
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
    cout<<"074";
    for(int i = 1; i <= 5; i++)
        cout<<st[i];
    cout<<"65";
    cout<<'\n';
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
    bkt(1);
    return 0;
}
