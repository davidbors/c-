#include <fstream>
using namespace std;
// solutia de 80 puncte
int main()
{
    ifstream f("numar.in");
    ofstream g("numar.ok");
    int n,nf,i;
    f>>n;
    nf=0;

    for(i=1;i<=n;i++)
        {if(i%4==1)
           nf=nf+3;
         else if(i%4==2)
               nf=nf+9;
         else if(i%4==3)
            nf=nf+7;
         else
            nf=nf+1;
         nf=nf%10;
        }


     g<<nf;
     f.close();
     g.close();


    return 0;
}
