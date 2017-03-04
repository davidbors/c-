#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,i,j,a[100][100],s1,s2,sdp,sds,ok,sp;

int main()
{
    ok = 1;
    f>>n;
    for(i=1; i<=n; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    for(i=1; i<=n&&ok; i++)
    {
        for(j=1; j<=n; j++)
        {
            s1+=a[i][j]; //linie
            s2+=a[j][i]; //col
            if(i==j)
                sdp+=a[i][i]; //DP
            if(i+j==n+1)
                sds+=a[i][n-i+1]; //DS
        }
        //g<<i<<"..."<<s1<<" "<<s2<<" "<<sdp<<" "<<sds<<'\n';
        if(sp==0)
            sp = s1;
        if(s2==s1&&s1==sp)
          {
              sp = s1;
              s1 = s2 = 0;
          }
        else
            ok = 0;
    }
  //  g<<"For..."<<'\n';
  //  g<<sdp<<" "<<sds<<" "<<s1<<'\n';
    if(sdp == sds && sds == sp)
        g<<"DA";
    else
        g<<"NU";
  //  if(ok ? g<<"DA" : g<<"NU");
    return 0;
}
