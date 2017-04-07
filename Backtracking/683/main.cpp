#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int init[15],n,st[100];

int valid(int k){
    if(k>n)
        return 0;
    for(int i = 1; i < k; i++)
        if(st[i]==st[k]||st[i-1]==init[st[i]-1]&&i>1) //
            return 0;
    return 1;
}

int solutie(int k){
    if(k!=n)
        return 0;
    return 1;
}

void afiseaza(int k){
    for(int i = 1; i <= k; i++)
        g<<st[i]<<" ";
    g<<'\n';
}

void bkt(int k){
    for(int i = 1; i <= n; i++){
        st[k] = i;
        if(valid(k)){
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
        init[i] = i;
    bkt(1);
    return 0;
}
