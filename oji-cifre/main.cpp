#include <fstream>
#include <iostream>

using namespace std;

ifstream f("date.in");
ofstream g("date.out");

int seg[10] = {6,2,5,5,4,5,6,3,7,6};
int mm[10] = {1,5,1,2,2,3,1,2,0,0};
int V;
long long int N,s,varsize,p=1,nr;
/*
int functio(int index){
    int k = 0;
    for(int i = index+1; i < 10; i++)
            if(seg[index]<seg[i])
                k++;
    return k;
}
*/
int i,v[25],cv,nm,nf,k,cvv,nrcf;

int nrcif(int nr){
    int k = 0;
    while(nr)
    {
        k++;
        nr/=10;
    }
    return k;
}

int main()
{
    f>>V;
    f>>N;
    if(V==1)
    {
        while(N)
        {
            s += seg[N%10];
            N /= 10;
        }
        g<<s;
    }
    else
    {
        //gen cel mai mare nr cu ac nr de cif ca si N
        nrcf = nrcif(N);
        while(nrcf) {
            nr = nr * 10 + 9;
            nrcf--;
        }
        for(i=N+1;i<=nr;i++)

    }
    /*
    //size calc
    varsize = sizeof(seg) + sizeof(V) + sizeof(N) + sizeof(s);
    cout<<varsize; */
    /* g<<'\n';
     for(i=0;i<10;i++) g<<functio(i)<<","; */
    return 0;
}
