#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,m,i,j,maxi,mini=10000,a[100][100];

int main()
{
    f>>m>>n; //m=linii; n=col
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];


    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            if(a[i][j]>maxi)
                maxi = a[i][j];
            else if(a[i][j]<mini)
                mini = a[i][j];
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            if(a[i][j]==mini)
                a[i][j] = maxi;
    for(i=1; i<=m; i++)
       {
           for(j=1; j<=n; j++)
            g<<a[i][j]<<" ";
            g<<'\n';
       }
    return 0;
}
