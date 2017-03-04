#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int n,i,v[100],fr[10],aux,frn[10],j,nr[100],nb,ok=1,n2=11,ar[100],n3,whl,i2;
char alf[11] = {'A','B','C','D','E','F','G','H','I','J','\0'};
int nnr[100],nnb;

int main()
{
    f>>n;
    for(i=1;i<=n;i++)
        f>>v[i];

    for(i=1;i<=n&&ok;i++){
        //cr frn[]
        n3=11;
        aux = v[i];
        while(aux){
            frn[aux%10]++;
            aux /= 10;
        }
        for(j=0;j<10&&ok;j++){
            if(frn[j]!=fr[j]){
                if(frn[j]-fr[j]==1){
                    nr[++nb] = j;
                    fr[j] = frn[j];
                } else {
                    ok = 0;
                    nnr[++nnb] = j;
                }
            }
        }
        //res frn[]
        for(i2=0;i2<10;i2++)
            frn[i2] = 0;
    }

    if(ok){
    for(i=2;i<=nb;i++)
        g<<nr[i];
    g<<"     ";
    for(i=2;i<=nb;i++)
        g<<alf[nr[i]];
        }
        else {
            if(nnb) for(i=1;i<=nnb;i++) g<<nnr[i];
            else g<<0;
            g<<"Normal";
        }
    return 0;
}
