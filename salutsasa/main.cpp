#include <iostream>

using namespace std;
int a[i][j],n,i,j,s,p;
int main()
{
    cin>>n;
    cin>>i;
    cin>>j;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
    cin>>a[i][j];
    for(i=1;i<=n;i++)
    {for(j=1;j<=n;j++)
    cout<<a[i][j]<<" ";
    cout<<endl; }
    s=0;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(i>j)
        if(a[i][j]%2!=0)
            s=s+ a[i][j];
        cout<<s;
        cout<<endl;
        p=1;
    for(i=1;i<=n;i++)
    for(j=1;j<=n;j++)
        if(i+j==n+1)
        if(a[i][j]%2==0)
    p=p*a[i][j];
    cout<<p;
    return 0;
}
