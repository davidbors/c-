#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int fr[100],x,i,del,maxi,n,maxiv;

int main() {

    cin>>n;
    for(i=0;i<n;i++)
        {
        cin>>x; fr[x]++;
    }

    for(i=0;i<100;i++)
        if(fr[i]&&fr[i]>maxi)
            maxi = fr[i];
        for(i=0;i<100&&!maxiv;i++)
            if(fr[i]==maxi)
                maxiv = i;

    for(i=0;i<100;i++)
        if(fr[i]&&i!=maxiv)
            del += fr[i];

    cout<<del;
    return 0;
}
