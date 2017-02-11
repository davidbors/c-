/* Într-o mină s-au pierdut mai mulţi pitici, reuşind să iasă doar piticul 1. În următoarea zi, piticul 1 se hotărăşte să-şi salveze prietenii, reuşind să salveze un singur pitic pe zi. Expediţiile sunt trecute zilnic într-un jurnal sub forma unui şir. Doar piticul 1 ştie drumul în mină şi drumul spre casă, şi zi de zi, piticii ieşiţi salvează un alt pitic.  Noaptea, piticii se întorc în ordinea inversă intrării în mină cu un nou pitic salvat, care va ieşi primul. Piticii primesc numere de ordine consecutive pe măsură ce ies din mină.

Cerinţă: Să se afle cu ajutorul şirului din jurnal, piticul cu numărul k din şir.

Şirul din jurnal:
1 2 1 1 2 3 4 3 2 1 1 2 3 4 5 6 5 4 3 2 1 1 2 3 4 5 6 7 8 7 6 5 4 3 2 1 …

Date de intrare: Fişierul pitici.in conţine pe prima linie numărul căutat k.

Date de ieşire: Fişierul pitici.out va conţine pe prima linie piticul căutat.

Restrictii si precizari:
1<=k<=109
*/

#include <iostream>

using namespace std;
int s,i,j,n,c;
int main()
{
    cin>>n;
    c=1;
    cout<<1<<" ";
    while(c<=n)
    {
        for(i=i;i>=1;i--)
        {
            cout<<i;
            c++;
            s++; //secventiator
        }
        i+=s;
    for(j=1;j<=i;j++)
    {
        cout<<j;
        c++;
    }
    s=0;
    }
    return 0;
}
