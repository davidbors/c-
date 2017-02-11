#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int x[100],fr[100],nr,cer,pozm,n,nfs,ok=1,aunr;

void nrsecv(int &scv)
{
    int x2,c,ant;
    scv=1;
    f>>ant;
    x[scv] = ant;
    fr[scv] = 1;
    c=1;
    while(f>>x2)
    {
        if(ant==x2)
            fr[scv]++;
        else
        {
            fr[++scv]=1;
            x[scv] = x2;
        }
        ant = x2;
    }

}

void afi(int v[],int n)
{
    for(int i=1; i<=n; i++)
        g<<v[i]<<" ";

}



int pozmax(int v[], int n)
{
    int maxi = v[1],pozmaxi=1,i;
    for(i=2; i<=n; i++)
        if(v[i]>maxi)
        {
            maxi = v[i];
            pozmaxi = i;
        }
    return pozmaxi;
}

void elm(int pozm)
{
    int i, j, st, dr;
    if(fr[pozm]>2)
    {
        nfs -= fr[pozm];//? el se el din nucleu
        //el in continuare pornind din nucleu st(<-) dr (->)
        st = pozm - 1;
        dr = pozm + 1;
        //while snt in vct && el din st = el din dr && form o secv>2 se el
        while(st>=1&&dr<=nr&&x[st]==x[dr]&&fr[st]+fr[dr]>2)
        {
            nfs -= (fr[st] + fr[dr]);
            st--;
            dr++;
        }
        if(st>=1&&dr<=nr)
        {
            i=st;
            j=dr;
            while(dr<=nr)
            {
                x[++st] = x[dr++];
                fr[st] = fr[dr-1];
            }
            nr = nr - j + i + 1; //el ramase
        }
    }

}


int main()
{
    f>>cer>>n;
    nfs = n;
    nrsecv(nr);
    aunr = nr;
    //g<<aunr<<" "<<aunr;
    if(cer == 1)
    {
        g<<nr;
    }
    else if(cer==2)
    {
        while(ok)
        {
            pozm = pozmax(fr, nr);
            //g<<pozm<<endl;
            if(fr[pozm]>2)
                elm(pozm);
            else
                ok=0;
        }
        if(nr==aunr)
            g<<"Nu se poate schimba nimic";
        else {
        g<<nfs<<endl;
        afi(x,nr);
        g<<endl;
        afi(fr,nr);

    }
}
    return 0;
}
