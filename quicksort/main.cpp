#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int v[100],n,x,ok=1,m;

void quicksort(int s, int d)
{
    int i,j,m,aux;
    i = s;
    j = d;
    m = v[(s+d)/2];
    while(i<=j)
    {
        while(v[i]<m) i++;
        while(v[j]>m) j--;
        if(i<=j)
        {
            aux = v[i];
            v[i] = v[j];
            v[j] = aux;
            i++;
            j--;
        }
    }
    if(s<j) quicksort(s,j);
    if(i<d) quicksort(i,d);
}

int main()
{
    int i,j;
    f>>n>>x;
    for(int i = 1; i <= n; i++)
        f>>v[i];
    for(int i = 1; i <= n; i++)
        g<<v[i]<<" ";
    quicksort(1,n);
    g<<'\n';
    for(int i = 1; i <= n; i++)
        g<<v[i]<<" ";
    g<<'\n';
    i = 1;
    j = n;
    ///cautare binara
    while(i<j&&ok){
        m = (i+j)/2;
        if(x==v[m]) ok = 0, g<<m;
        if(x<v[m]) j = m;
        else i = m + 1;
    }
    //g<<m;
    return 0;
}
