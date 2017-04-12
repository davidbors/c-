//pe un teren denvlt este o bila pe poz x,y
//intr-o matrc cu m-lin, n-col si fiecare el repr inaltimea platoului
//sa se afiseze lungimea celui mai scurt drum pt ca bila sa iasa din matrice
//iese prin (n,m)
#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

void lee(int x, int y, int k){
    a[x][y] = k;
    k++;
    if(a[x-1][y]==0 || a[x-1][y]<a[x][y]) lee(x-1,y,k);
    if(a[x][y+1]==0 || a[x][y+1]<a[x][y]) lee(x,y+1,k);
    if(a[x+1][y]==0 || a[x+1][y]<a[x][y]) lee(x+1,y,k);
    if(a[x][y-1]==0 || a[x][y-1]<a[x][y]) lee(x,y-1,k);
}

int main()
{
    f>>x_str>>y_str>>n>>m;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= m; j++)
            f>>a[i][j];
    for(int i = 0; i <= n+1; i++)
        a[i][0] = 9999,
        a[i][m+1] = 9999;
    for(int j = 0; j <= m+1; j++)
        a[0][j] = 9999,
        a[n+1][j] = 9999;
    lee(x_str, y_str);
    g<<"nr de pasi necesar este: "<<k;
    return 0;
}
