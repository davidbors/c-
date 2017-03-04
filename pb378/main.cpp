#include <fstream>

using namespace std;

ifstream f("matrix.in");
ofstream g("matrix.out");

int a[3002][1002],k,fr2[1002],M,N,i,j,n,maxi,ap;

int main()
{
    f>>M>>N;
    N=1;
    for(i=1; i<=M; i++)
        for(j=1; j<=N; j++)
            f>>a[i][j];

    for(i=1; i<=M; i++)
        for(j=1; j<=N; j++)
        {
            //? 1 sunt pe linie
            while(a[i][j])
            {
                if(a[i][j]%10==1)
                    k++;
                a[i][j] /= 10;
            }
            if(k>n)
                n =k;
            //in ce grup incadrez
            fr2[k]++;
            k = 0;
        }
    for(i=0; i<=n; i++)
        if(fr2[i]>maxi)
        {
            maxi = fr2[i];//nr de ap
            ap = 1;
        } else if(fr2[i]==maxi) ap++;
    g<<ap<<" "<<maxi;
   /* for(i=0;i<=n;i++)
        g<<i<<"apare de "<<fr2[i]<<"ori: "<<"\n "; */
 /*   for(i=1;i<=M;i++)
    {for(j=1;j<=N;j++)
            g<<a[i][j];
        g<<'\n';} */
    return 0;
}
