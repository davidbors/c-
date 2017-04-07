#include <iostream>
#include <fstream>
#include <vector>

using namespace std;

ifstream f("cmmdc.in");
ofstream g("cmmdc.out");

int n,k,x,st[100],solutii,maxi;
int ver[5],max_c[5];
vector<int> v(0);

int cmmdc(int x, int y, int z){
    //cmmdc((x,y),z)
    //cmmdc(x,y)
    while(x!=y){
        if(x>y) x -= y;
        else y -= x;
    }
    while(x!=z){
        if(x>z) x -= z;
        else z -= x;
    }
    return x;
}

int valid(int l){
    if(l>k)
        return 0;
    if(l>1&&st[l]<=st[l-1])
        return 0;
    return 1;
}

int solutie(int l){
    if(l!=k)
        return 0;
    return 1;
}

void afiseaza(int l){
    solutii++;
    for(int i = 1; i <= l; i++)
        ver[i] = v[st[i]];
        //g<<v[st[i]]<<" ";
    if(cmmdc(ver[1],ver[2],ver[3])>maxi){
        maxi = cmmdc(ver[1],ver[2],ver[3]);
        max_c[1] = ver[1];
        max_c[2] = ver[2];
        max_c[3] = ver[3];
    }
    /*
    for(int i = 1; i <= l; i++)
        g<<ver[i]<<" ";
    g<<'\n';
    */
}

void bkt(int l){
    for(int i = 0; i < n; i++){
        st[l] = i;
        if(valid(l)){
            if(solutie(l))
                afiseaza(l);
            else
                bkt(l+1);
        }
    }
}

int main()
{
    f>>n>>k;
    for(int i = 0; i < n; i++)
        f>>x,
        v.push_back(x);
    bkt(1);
    //g<<'\n';
    //g<<solutii;
    //g<<cmmdc(50,20,65);
    for(int i = 1; i <= 3; i++)
        g<<max_c[i]<<" ";
    return 0;
}
