#include <iostream>
#include <fstream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int P,N,i,m[100],gn[100],maxi,ok,aux,nrn,p,poz,N1,n,s,dv,dvd,cuartg,cuartm;

int main()
{
    f>>P; //care cerinta se va rezolva
    f>>N; //nr N
    for(i=1; i<=N; i++)
        f>>gn[i]; //cartonasele ginei
    for(i=N+1; i<=2*N; i++)
        f>>m[i]; //cartonasele lui mihai
    if(P==1)
    {
        maxi = 0;
        for(i=2; i<=N; i++)
        {
            aux = gn[i];
            ok=0;
            while(aux&&!ok)
            {
                if(aux%2!=0)
                    ok = 1;
                aux /= 10;
            }
            if(!ok&&gn[i]>maxi)
                maxi = gn[i];
        }

        for(i=N+1; i<=2*N; i++)
        {
            aux = m[i];
            ok=0;
            while(aux&&!ok)
            {
                if(aux%2==0)
                    ok = 1;
                aux /= 10;
            }
            if(!ok&&m[i]>maxi)
                maxi = m[i];
        }
        g<<maxi;
    }
    else if(P==2)
    {
        nrn = 0;
        N1=N;
        for(i=1; i<=N; i++)
        {
            nrn = 0;
            p=1;
            aux = gn[i];
            while(aux)
            {
                if(aux%10%2!=0)
                {
                    nrn = (aux%10)*p + nrn;
                    p *= 10;
                }
                aux /= 10;
            }
            if(nrn==0)
            {
                for(poz=i; poz<N; poz++)
                    gn[poz]=gn[poz+1];
                i--;
                N--;
            }
            else

                gn[i] = nrn;
        }
        n = 2*N1;
        for(i=N1+1; i<=2*N1; i++)
        {
            nrn = 0;
            p=1;

            aux = m[i];
            while(aux)
            {
                if(aux%10%2==0)
                {
                    nrn = (aux%10)*p + nrn;
                    p *= 10;
                }
                aux /= 10;
            }
            if(nrn==0)
            {
                for(poz=i; poz<n; poz++)
                    m[poz]=m[poz+1];
                i--;
                n--;
            }
            else
                m[i] = nrn;
        }
        /*  for(i=1; i<=N; i++)
          {
              g<<gn[i]<<" ";
          }
          g<<endl; */
        //alfare nr de pe r2
        for(i=1; i<=N; i++)
        {
            dvd=1;
            s=0;
            while(s<=gn[i])
            {
                s += dvd;
                dv = dvd;
                dvd += 4;
            }
            if(s==gn[i])
                cuartg++;
            //  g<<dv-4<<" ";
        }
        //   g<<endl;


        /*   for(i=N1+1; i<=n; i++)
           {
               g<<m[i]<<" ";
           } */
        // g<<endl;
        for(i=N1+1; i<=n; i++)
        {
            dvd=1;
            s=0;
            while(s<=m[i])
            {
                s += dvd;
                dv = dvd;
                dvd += 4;
            }
            if(s==m[i])
                cuartm++;
            // g<<dv-4<<" ";
        }
        //g<<endl;
        if(cuartg>cuartm)
            g<<1;
        else
            g<<2;
    }
    else if(P==3)
    {
        nrn = 0;
        N1=N;
        for(i=1; i<=N; i++)
        {
            nrn = 0;
            p=1;
            aux = gn[i];
            while(aux)
            {
                if(aux%10%2!=0)
                {
                    nrn = (aux%10)*p + nrn;
                    p *= 10;
                }
                aux /= 10;
            }
            if(nrn==0)
            {
                for(poz=i; poz<N; poz++)
                    gn[poz]=gn[poz+1];
                i--;
                N--;
            }
            else

                gn[i] = nrn;
        }
        n = 2*N1;
        for(i=N1+1; i<=2*N1; i++)
        {
            nrn = 0;
            p=1;

            aux = m[i];
            while(aux)
            {
                if(aux%10%2==0)
                {
                    nrn = (aux%10)*p + nrn;
                    p *= 10;
                }
                aux /= 10;
            }
            if(nrn==0)
            {
                for(poz=i; poz<n; poz++)
                    m[poz]=m[poz+1];
                i--;
                n--;
            }
            else
                m[i] = nrn;
        }
        /*  for(i=1; i<=N; i++)
          {
              g<<gn[i]<<" ";
          }
          g<<endl; */
        //alfare nr de pe r2
        for(i=1; i<=N; i++)
        {
            dvd=1;
            s=0;
            while(s<=gn[i])
            {
                s += dvd;
                dv = dvd;
                dvd += 4;
            }
            if(s==gn[i])
                cuartg++;
            //  g<<dv-4<<" ";
        }
        //   g<<endl;


        /*   for(i=N1+1; i<=n; i++)
           {
               g<<m[i]<<" ";
           } */
        // g<<endl;
        for(i=N1+1; i<=n; i++)
        {
            dvd=1;
            s=0;
            while(s<=m[i])
            {
                s += dvd;
                dv = dvd;
                dvd += 4;
            }
            if(s==m[i])
                   cuartm++;
            // g<<dv-4<<" ";
        }
        //g<<endl;
        if(cuartg>cuartm)
            g<<1;
        else if (cuartg<cuartm)
            g<<2;
        else if(cuartm==cuartg)
        {   if(gn[1]&&m[N1+1])
            if(gn[1]>m[N1+1])
                g<<gn[1];
            else
                g<<m[N1+1];
        }
    }
    return 0;
}
