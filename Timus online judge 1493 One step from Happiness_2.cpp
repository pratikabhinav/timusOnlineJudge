#include<iostream>
#include<cmath>
#include<stdlib.h>
using namespace std;

#define ll long long

int main(){
ll a, plus, minus, forw=0, backw=0, flag=0;
cin>>a;
plus=a+1;
minus=a-1;
cout<<plus<<' '<<minus<<'\n';
ll by;
ll rem=a;
for (int i=5;i>=0;i--){
    ll x=1;
    for (int j=i;j>0;j--){
        x*=10 ;
    }
    by=rem/x;
    rem=rem%x;
    if (i>=3){
        forw+=by;
    }
    else{
        backw+=by;
    }
}
if (forw-backw==1||backw-forw==1){
    flag=1;
}
cout<<forw<<' '<<backw<<'\n';
cout<<flag<<endl;
if (!flag)
    cout<<"No";
return 0;
}
