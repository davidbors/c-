#include <iostream>


using namespace std;

int sum(int x, int i) {
    if(i > x)
        return 0;
    else
        return i + sum(x, i+1);
}

void cit(int n, int i, int v[100]) {
    if(i<n)
    {
        cin>>v[i];
        cit(n, i+1,v);
    }
}

void afi(int n, int i, int v[100]){
    if(i<n)
    {
        cout<<v[i]<<" ";
        afi(n, i+1,v);
    }
}

int scif(int n)
{
    if(n==0)
        return 0;
    else
        return n%10 + scif(n/10);
}

int v[100];

int main()
{
    //cout << sum(4,1);
    //cit(3,0,v);
    //afi(3,0,v);
    cout<<scif(123);
    return 0;
}
