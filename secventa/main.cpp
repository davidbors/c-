//http://olidej.wikispaces.com/file/view/2014_09p1_Secventa.pdf/489928020/2014_09p1_Secventa.pdf
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,i,v[100],c,s,k,maxi,pos,d,j,i2,smx;

int sum(int i, int j, int v[]){
    int iu,s=0;
    for(iu=i;iu<=j;iu++)
        s += v[iu];
    return s;
}

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++)
    {
        s = 0;
        /*for(i2=i;i2<=j;i2++)
            s += v[i2]; */
        s = sum(i,j,v);
        d = j - i + 1;
        //TEST:
        g<<j<<" "<<s<<" "<<d<<endl;
        if(s%d==0)
        {
            if(d > maxi){
                pos = i;
                maxi = d;
                smx = s;
            }
        }
    }
    g<<pos<<" "<<maxi<<" "<<smx;
    //g<<sum(1,4,v);
    //g<<endl<<sum(1,3,v);
    return 0;
}
