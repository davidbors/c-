/// triunghiul lui Pascal

#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int r;

vector<int> v(3, 1);

int l = 3;

int sum(int x) {
    int suma = 0;
    for(int i = 1; i <= x; i++)
        suma += i;
    return suma;
}

void gen(int r) {
    for(int i = 3; i <= r; i++){
        v.push_back(1);
        for(int j = 2; j <= i-1; j++)
            v.push_back(v[sum(i-2)+j-2]+v[sum(i-2)+j-1]);
        v.push_back(1);
    }
}


int main()
{
    f>>r;
    gen(r+1);
    for(int i = sum(r-1); i < sum(r); i++)
        g<<v[i]<<" ";
    return 0;
}
