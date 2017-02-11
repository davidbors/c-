/* se spune ca un nr este deosebit daca exista un nr nat m astfel incat n=m+s(m) unde s(m)=suma cifrelor
    se citeste un nr n, sa se spuna daca este deosebit
*/

#include <iostream>

using namespace std;

int main()
{   int i,ix,s,n;
    cin>>n;
    for(i=1;i<=n;i++)
    {   s=0;
        ix=i;
        while(ix)
        {
            s+=ix%10;
            ix/=10;
        }
        if(i+s==n)
            cout<<"DA"<<" "<<i;
    }

    return 0;
}
