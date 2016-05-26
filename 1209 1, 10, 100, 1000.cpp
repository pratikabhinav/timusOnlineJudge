#include<iostream>
#include<stdio.h>
#include<math.h>

using namespace std;

#define ll long long

int main(){
ll n, k;
cin>>n;
while(n--){
int ans = 0;
cin>>k;
    ll l=0, r=pow(2,31);
    while (l<=r){
        ll m = (l+r) >> 1;
        if (m*(m+1)== 2*(k-1)){
        ans=1;
        break;
        }
        else if (m*(m+1) < 2*(k-1))
            l=m+1;
        else
            r=m-1;
    }
cout<<ans<<' ';
}
return 0;
}
