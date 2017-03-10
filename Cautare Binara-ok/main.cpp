#include <iostream>
using namespace std;

int x,n,v[100],li,ls,ok,m,i,j,ok1,k;

int main() {
	cin>>x;
	cin>>n;
	for(i=1; i<=n; i++)
	    cin>>v[i];
	for(i=1; i<=n; i++)
	    for(j=i+1; j<=n; j++)
	        if(v[i]>v[j])
	            swap(v[i],v[j]);
	for(i=1; i<=n; i++)
	    cout<<v[i]<<" ";
	cout<<'\n';
	li = 1;
	ls = n;
	while(!ok){
	    m = (li + ls) / 2;
	    if(v[m]==x) {
	        k = ok = 1;
	        for(i = m + 1; i <= n&&!ok1; i++)
	            if(v[i]!=x) ok1 = 1;
	            else k++;
	        ok1 = 0;
	        for(i = m - 1; i > 0&&!ok1; i--)
	            if(v[i]!=x) ok1 = 1;
	            else k++;
	        cout<<"FOUND "<<k<<" times";
	    }
	    else if(v[m]<x) li = m + 1;
	    else if(v[m]>x) ls = m - 1;
	}
	return 0;
}
