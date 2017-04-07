#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int a[52][52],m,n,i,j,way,dir,x,y,ok;

int main()
{
    f>>m>>n;
    for(i=1; i<=m; i++)
        for(j=1; j<=n; j++)
            f>>a[i][j];
    f>>y>>x;
  //  g<<a[y][x]<<'\n'<<'\n';
    ok = 1;

    while(ok)
    {
        //verific daca a iesit din labirint
        if(y==1||y==m||x==1||x==n)
        {
            if(a[y][x]==0)
            {
                ok = 0;
                g<<"Gata!";
            }

        }

        //evaluez daca trb sa i schimb directia
        if(a[y][x]&&ok)
        {
            //px = x;
            if(a[y][x]==1||a[y][x]==2)
                way = 0;
            else way = 1;
            if(a[y][x]==1||a[y][x]==3)
                dir = 0;
            else dir = 1;
        }
        //misc eroul in labirint
        if(ok)
        {
            if(!dir)
            {
                if(!way)
                {
                    y++;
                    x++;
                }
                else if (way)
                {
                    y--;
                    x--;
                }
            }
            else if (dir)
            {
                if(!way)
                {
                    y--;
                    x++;
                }
                else if (way)
                {
                    y++;
                    x--;
                }
            }

        }
        if(ok)
        g<<a[y][x]<<" "<<way<<" "<<dir<<'\n';
    }


    ///     if(i==1||i==n||j==1||j==n)//bordura matricei
    return 0;
}
