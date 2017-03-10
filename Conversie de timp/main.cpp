#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <iomanip>
using namespace std;

int nrcif(int nr) {
    int cif = 0;
    while(nr) {
        nr /= 10;
        cif++;
    }
    return cif;
}

int main(){
    string time,hour,rest,fin;
    int i,nhour=0,minihour,out=0;
    cin >> time;
    for(i=0; i<2; i++)
        hour += time[i];
    for(i=2; i<8; i++)
        rest += time[i];
    for(i=8; i<10; i++)
        fin += time[i];
    //cout<<hour<<" "<<rest<<" "<<fin;
    for(i=0; i<2; i++){
        minihour = hour[i] - '0';
        nhour = nhour * 10 + minihour;
    }
    if(fin=="PM"&&nhour!=12)
        nhour += 12;
    if(fin=="AM"&&nhour!=12)
        nhour = nhour;
    if(fin=="PM"&&nhour==12)
        nhour = 12;
    if(fin=="AM"&&nhour==12)
    { hour = "00"; cout<<hour<<rest; out = 1; }
    else if(out==0&&nrcif(nhour)>1)
    cout<<nhour<<rest;
    else cout<<"0"<<nhour<<rest;
    return 0;
}
