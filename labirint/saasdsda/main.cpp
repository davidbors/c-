#include <iostream>
#include <fstream>
using namespace std;
int n,m,i,j,v[100][100],x,y,ok,c;
int main()
{
    ifstream f("date.in");
    ofstream g("date.out");
    f>>n>>m;
    for(i=1;i<=n;i++)
        for(j=1;j<=m;j++)
            f>>v[i][j];
    f>>x>>y;
    i=x;
    j=y;
    while(ok==0)
    {
        if(v[i][j]==1)
        {
            v[i][j]=0;
            i--;j--;
            c++;
            while(v[i][j]==0&&ok==0)
            {
                if(i==1||j==1||i==n||j==m)
            if(v[i][j]==0)
                ok=1;
                i--;j--;
                c++;
            }
        }
        if(v[i][j]==2)
        {
            v[i][j]=0;
            i--;j++;
            c++;
            while(v[i][j]==0&&ok==0)
            {
                if(i==1||j==1||i==n||j==m)
            if(v[i][j]==0)
                ok=1;
                i--;j++;
                c++;
            }
        }
        if(v[i][j]==3)
        {
            v[i][j]=0;
            i++;j++;
            c++;
            while(v[i][j]==0&&ok==0)
            {
                if(i==1||j==1||i==n||j==m)
            if(v[i][j]==0)
                ok=1;
                i++;j++;
                c++;
            }
        }
        if(v[i][j]==4)
        {
            v[i][j]=0;
            i++;j--;
            c++;
            while(v[i][j]==0&&ok==0)
            {
                if(i==1||j==1||i==n||j==m)
            if(v[i][j]==0)
                ok=1;
                i++;j--;
                c++;
            }
        }
        if(i==1||j==1||i==n||j==m)
            if(v[i][j]==0)
                ok=1;
    }
    g<<c;

    return 0;
}
