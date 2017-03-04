#include<fstream>

using namespace std;

int main(){
    unsigned long long n,N,S,P;
    //segm fiecare cif
    int s[10] = {6,2,5,5,4,5,6,3,7,6};
    //cifre < obt prin add de segm
    int a[10] = {1,5,1,2,2,3,1,2,0,0};
    //cifre se pot obt prin add + cifra curenta
    int b[10] = {2,7,2,3,3,4,2,5,1,2};
    int c,k,i,j,w[25],aux,v;
    ifstream f("cifre.in");
    ofstream g("cifre.out");
    f>>v>>n;
    if(v==1){
        N=n; S=0;
        while(N)
        {
            c = N%10;
            S += s[c];
            N /= 10;
        }
        g<<S;
    } else {
        //duc cifre in vector
        N=n; k=0;

        while(N)
        {
            w[++k] = N%10;
            N /= 10;
        }
        //inv vect
        for(i=1,j=k;i<j;i++,j--)
        {
            aux = w[i];
            w[i] = w[j];
            w[j] = aux;
        }

        S=0;
        for(i=1;i<=k;i++)
        {
            if(a[w[i]])
            {
                P = a[w[i]];
                for(j=i+1;j<=k;j++)
                    P *= b[w[j]];

                S += P;
            }
        }
        g<<S;
    }
    f.close(); g.close();
    return 0;
}
