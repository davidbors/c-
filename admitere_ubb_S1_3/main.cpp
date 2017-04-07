#include <fstream>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

vector<int> v(0);
vector<int> m_m(0);
int n,x,mini1=99,mini2=99,mini3=99,maxi1,maxi2,maxi3,i,j;

void big_prod() {
    int gata = 0;
    if(m_m[0]*m_m[1]*m_m[2] < 0)
        for(int i = 3; i < m_m.size()&&!gata; i++)
            if(m_m[0]*m_m[1]*m_m[i]>0)
                g<< m_m[0] << " " << m_m[1] << " " << m_m[i], gata=1;
    else g<< m_m[0] << " " << m_m[1] << " " << m_m[2];
}

bool regula (int i,int j) { return (abs(i)>abs(j)); }

int main()
{
    f>>n;
    for(int i = 0; i < n; i++)
        f>>x,
        v.push_back(x);

    sort(v.begin(), v.end());

    for(i = 0,j = v.size()-1; i < 3; i++,j--)
        m_m.push_back(v[i]),
                      m_m.push_back(v[j]);

    //sort dupa modul
    sort(m_m.begin(), m_m.end(), regula);
    big_prod();

    return 0;
}
