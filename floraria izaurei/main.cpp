#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,x,nx,fr1[100],fr2[100],i2,i,mini,maxi,nr1,nr2,j,ok1,ok2,fr[100];

int main()
{
    f>>n;
    nx = n;
    mini = 999999;
    while(n)
    {

        while(f>>x&&x)
            fr2[x]++;
        for(i=0; i<100; i++)
            if(fr2[i])
                fr[i]++;
        if(n!=nx)
        {
            for(i2=0; i2<100; i2++)
                if(fr1[i2]>fr2[i2])
                {
                    fr1[i2] = fr2[i2];
                    fr2[i2] = 0;

                }
        }
        else for(i2=0; i2<100; i2++)
            {
                fr1[i2] = fr2[i2];
                fr2[i2] = 0;
            }
        n--;

    }
    for(i2=1; i2<100; i2++)
    {
        if (fr1[i2]>maxi&&fr[i2]==nx) maxi = fr1[i2];
        else if(fr1[i2]<mini&&fr1[i2]&&fr[i2]==nx) mini = fr1[i2];
    }
    ok1 = ok2 = 1;
    for(i2=0,j=99; i2<100; i2++,j--)
    {
        if(fr1[j]==mini&&ok2)
        {
            nr1 = j;
            ok2 = 0;
        }
        else if(fr1[i2]==maxi&&ok1)
        {
            nr2 = i2;
            ok1 = 0;
        }
    }
    for(i=1; i<100; i++)
        if(fr[i]) g<<i<<"..."<<fr[i]<<" ";
    g<<'\n';
    if(!maxi&&mini==999999)
        g<<0;
    else
        g<<nr1<<" "<<mini<<'\n'<<nr2<<" "<<maxi;

    return 0;
}
