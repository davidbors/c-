#include <iostream>
using namespace std;

int a,b,ax,bx;

int main() {
	cin>>a>>b;
	ax = a; bx = b;
	while(a!=b){
	    if(a>b)
	        a -= b;
	    else
	        b -= a;
	}
	cout<<"CMMDC: "<<a<<'\n';
	cout<<"CMMMC: "<<(ax*bx)/a;
	return 0;
}
