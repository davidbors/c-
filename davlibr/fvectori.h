void cit(long long int n, long long int i, long long int v[]){
    if(i<n)
    {
        f>>v[i];
        cit(n,i+1,v);
    }
}

void afi(long long int n, long long int i, long long int v[]){
    if(i<n)
    {
        g<<v[i]<<" ";
        afi(n,i+1,v);
    }
}



