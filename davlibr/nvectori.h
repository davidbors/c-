void cit(int n, int i, int v[]){
    if(i<=n)
    {
        std::cin>>v[i];
        cit(n,i+1,v);
    }
}

void afi(int n,int i,int v[]){
    if(i<=n)
    {
        std::cout<<v[i]<<" ";
        afi(n,i+1,v);
    }
}

void invec (int n, int v[]) {
    int i=1; int j=n; int aux=0;
    while(i<j){
        aux=v[i]; v[i] = v[j]; v[j] = aux;
        i++;j--;
    }

}
