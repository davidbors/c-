#include <iostream>
#include <vector>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int main()
{
    int n,n2,x,n3;
    f>>n;

    vector<int> v(n);
    vector<int> v2(66, 11);

    for(int i = 0; i < n; i++)
        f>>v[i];
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    cout<<'\n';

    f>>n2;
    for(int i = 0; i < n2; i++)
    {
        f>>x;
        v.push_back(x);
    }
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    cout<<'\n';

    f>>n3;
    while(n3)
    {
        v.pop_back();
        n3--;
    }
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    for(int i = 0; i < v2.size(); i++)
        g<<v2[i]<<" ";

    cout<<'\n';
    g<<'\n';

    v.swap(v2);
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";
    for(int i = 0; i < v2.size(); i++)
        g<<v2[i]<<" ";

    cout<<'\n';

    v.clear();
    for(int i = 0; i < v2.size(); i++)
        v.push_back(v2[i]);
    for(int i = 0; i < v.size(); i++)
        cout<<v[i]<<" ";

    return 0;
}
