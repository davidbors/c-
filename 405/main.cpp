#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int x,i,j,a[100][100],aux,n,p;

int main()
{
    f>>x;
    aux = x;
    //aflu cate cifre are x-u ca sa stiu cate linii trb sa fac
    while(aux){
        aux /= 10;
        n++;
    }
    //fac matricea
    p = 1;
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++) {
            if(i>1)
                a[i][j] = x / p % 10; //pun in fctie de linie cifra unitatilor/zecilor/....
            else
                a[i][j] = x % 10;//pun in fctie de linie cifra unitatilor/zecilor/.... * daca e linia 1 ar trb sa fac x / 0 % 10 da e imposibil ca gen mate si mna
        }
        p *= 10;
    }
    //afisez matricea
    for(i=1;i<=n;i++){
        for(j=1;j<=n;j++)
            g<<a[i][j]<<" ";
        g<<'\n';
    }
    return 0;
}
