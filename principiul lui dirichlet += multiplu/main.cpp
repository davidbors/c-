#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int rest[100],i,n,j,n2,nr;

int main()
{
    f>>n;
    rest[1] = 1;
    for(i=2; i<=n; i++) {
        rest[i] = (rest[i-1] * 10 +1) % n;
    if(rest[i]==0)
    {
        while(i)
        {
            g<<1;
            i--;
        }
        g<<0;
    }
    else
    {
        j = 1;
        do {
            if(rest[j]==rest[i])
            {
                n2 = i-j;
                while(n2){g<<1; nr--;}
                while(j) {g<<0; j--;}
            }
            else j++;
        } while(j<i);
    }
    }
    return 0;
}
