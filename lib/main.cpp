#include <iostream>
#include <fstream>

using namespace std;

ifstream f("pangol.in");
ofstream g("pangol.out");


//it reads an array from a file called f
void Aread(int v[], int n){
    for(int i=0;i<n;i++)
        f>>v[i];
}

//it shows an array in a file called g
void Ashow(int v[],int n){
    for(int i=0;i<n;i++)
        g<<v[i]<<" ";

}


//it reads a number from console
void read(int &n){
    cin>>n;
}

//it shows a number to console
void show(int n){
    cout<<n;
}

//it resets an array
void Ares(int v[], int &n){
    for(int i=0;i<n;i++)
        v[i] = NULL;
    n=0;
}

//it deletes everything from an array from the spos+1 to fpos
void Adel(int v[],int &n,int spos, int fpos){
    int whl = fpos - spos;
    int i;
    while(whl){
    for(i = spos; i<n; i++)
        v[i] = v[i+1];
    whl--;n--;
    }
}

int v[100],n,q;

int main()
{
    f>>n;
    Aread(v,n);
    Ashow(v,n);
    Adel(v,n,2,5);
    Ashow(v,n);
    return 0;
}
