#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("pangol.in");
ofstream g("pangol.out");

int k,n,solutii;
vector<int> st(100);

int valid(int k) {
    if(k>n)
        return 0;
    for(int i = 1; i < k; i++)
        if(st[i]==st[k])
            return 0;
    return 1;
}

int solutie(int k) {
    if(k!=n)
        return 0;
    return 1;
}

void afiseaza(int k) {
    solutii++;
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
    bkt(1);
    g<<'\n'<<solutii;
    return 0;
}
