#include <iostream>
#include <fstream>
#include <cstring>

using namespace std;

ifstream f("pangol.in");
ofstream g("pangol.out");

char nume[100];
int n,k,st[100],solutii;

int valid(int k){
    if(k>n)
        return 0;
    for(int i = 1; i < k; i++)
        if(st[i]==st[k])
            return 0;
    return 1;
}

int solutie(int k){
    if(k!=n)
        return 0;
    return 1;
}

void afiseaza(int k) {
    solutii++;
    for(int i = 1; i <= k; i++)
        g<<nume[st[i]]<<" ";
    g<<'\n';
}

void bkt(int k){
    for(int i = 0; i < n; i++){
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
    f>>nume;
    n = strlen(nume);
    bkt(1);
    g<<solutii;
    return 0;
}
