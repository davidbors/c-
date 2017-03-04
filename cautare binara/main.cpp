#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int x,v[1000],ok,i,j,i2,findv,st,fn,mid,md;

int main()
{
    f>>findv;
    while(f>>x)
        v[++j] = x;
    for(i=1; i<j; i++)
        for(i2=i+1; i2<=j; i2++)
            if(v[i]>v[i2])
                swap(v[i],v[i2]);
    st = v[1];
    fn = v[j];
    mid = (int)j/2;
    md = v[mid];
    while(!ok)
    {
        if(md==findv || st==findv || fn==findv)
        {
            ok = 1;
        }
        else   if(md<findv)
        {
            st = md;
            mid = (int)(j-mid)/2;
            md = v[mid];
        }
        else if(md>findv)
        {
            fn = md;
            mid = (int)(j-st)/2;
            md = v[mid];
        }
    }
    if(ok)
        g<<"OK";
    else g<<"NOK";
    return 0;
}
