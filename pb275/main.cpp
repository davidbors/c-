#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int p,n,i,j,v[100],nx,inx,pv,way,k,vl,pos,ok,inxx;

int inv(int nr){
    int inv = 0;
    while(nr){
        inv = inv*10 + nr%10;
        nr /= 10;
    }
    return inv;
}

int main()
{
    f>>p>>n;
    nx = n;
    inxx = inx = inv(nx);
    while(inx)
    {
        v[++i] = inx%10;
        inx /= 10;
    }
    pv = 0;
    way = 0;
    k = 0; //sens st->dr
    while(n>1){
        vl = pv + p;
        //vl > n schimb sens
        if(vl>n)
           {
              vl = pv + p - n;
              vl = n - vl + 1;
              k++;
              way = k%2;
           }
        //el v[vl]
        if(!way){
            pos = vl;
            for(j=pos;j<=i;j++)
                v[j]=v[j+1];
            n--;
        } else {
            pos = vl;
            for(j=pos;j<=i;j++)
                v[j]=v[j+1];
            n--;
        }
    }
    g<<v[1]<<" ";
    k = 0;
    ok = 0;
    while(inxx&&!ok)
    {   k++;
        if(inxx%10==v[1])
        {g<<k; ok = 1;}
        inxx /= 10;
    }
    return 0;
}
