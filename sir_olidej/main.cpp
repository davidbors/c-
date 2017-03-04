// http://olidej.wikispaces.com/file/view/2014_09p2_Sir.pdf/489928084/2014_09p2_Sir.pdf
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

long long int p,x,id,nr,revid,k,n,fnr,i,aux,cf[100],j,mfnr,fr[10],bar,cifmij,c;
int nrb[100];

int main()
{
    f>>p;
    f>>n;
    f>>k;
    bar = 1;
    /**< a */
    //aflu grupa si indexul nrului in grupa
    while(p>=(x*(x+1))/2) x++;
    id = p - ((x*(x-1))/2);

    // daca gr imp index normal
    if(x%2==1) nr = ((x*(x-1))/2) + id;
    //altfel index inversat
    else if(x%2==0)
    {
        id = x - id + 1;
        revid = x - id + 1;
        nr = ((x*(x-1))/2) + id;
    }
    g<<nr<<'\n';

    /**< b) ? */
    fnr = ((n*(n-1))/2) + 1;
    for(i=1; i<=n; i++)
    {
        aux = fnr;
        while(aux)
        {
            cf[++j] = aux%10;
            fr[aux%10]++;
            aux /= 10;
        }
        fnr++;
    }
    for(i=1; i<=j; i++)
        g<<cf[i]<<" ";
    g<<'\n';
    for(i=0;i<10;i++)
        g<<fr[i]<<" ";
    g<<endl;
    for(i=9;i>0;i--)
    {
        if(fr[i]==1&&bar)
        {
            cifmij = i;
            bar = 0;
        }
        else if(fr[i]>=2){
            if(fr[i]%2!=0)
                fr[i]--;
            fr[i] /= 2;
            while(fr[i]){
                nrb[++c] = i;
                fr[i]--;
            }
        }
    }
    for(i=1;i<=c;i++)
        g<<nrb[i];
    g<<cifmij;
    for(i=c;i>=1;i--)
        g<<nrb[i];
    g<<'\n';

    /**< c) */
    x = 0;
    while(k>=(x*(x+1))/2) x++;
    g<<x;
    g<<'\n';

    /**
    char sir[100] = "1234", ch;
    int sirn;
    sirn = sir[3] - '0';
    ch = sirn + '0';
    g<<ch; */
    return 0;
}
