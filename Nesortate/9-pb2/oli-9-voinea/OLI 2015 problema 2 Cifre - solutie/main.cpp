#include <fstream>

using namespace std;
long long x,a,b,c,px=1,pc=1,pb=1;
int k,i,p,n,poz;
ifstream f("cifre.in");
ofstream g("cifre.out");

int main()
{
    f>>x;
    f>>k>>p;
    a=x;
    //numar cate cifre are x
    while(a)
    {
        n++;
        a=a/10;
    }

    //reduc numarul de pasi la o valoare mai mica sau egala cu n
    k=k%n;
    if(k==0) k=n;

    for(i=1;i<=n-k;i++)
        px=px*10;
    for(i=1;i<=k;i++)
        pc=pc*10;

    for(i=1;i<=p;i++)
        {
            a=x/(px*10);//numarul din fata cifrei care se modifica
            b=x/px%10;//cifra care se modifica
            c=x%px;//numarul de dupa cifra care se modifica
            //modific cifra
            if(b==9) b=1;
            else if(b%2==0) b=b/2;
                 else b++;
            x=c*pc+a*10+b;//reconstruiesc numarul, astfel incat sa modific din nou cifra de pe pozitia k
        }

    poz=n-k*p%n+1;//pozitia primei cifre din numarul initial dupa p pasi
    if(poz==n+1) poz=1;
    px=1;pb=1;pc=1;
    for(i=1;i<=n-poz;i++)
        px=px*10;
    for(i=1;i<=n-1;i++)
        pb=pb*10;
    for(i=1;i<=poz-1;i++)
        pc=pc*10;
    a=x/(px*10);
    b=x/px%10;
    c=x%px;
    x=b*pb+c*pc+a;
    g<<x;
    return 0;
}
