#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;

#define ll long long

int main(){
int m,n,y,k=0, flag=0, z;

cin>>n>>m>>y;
for (int i=0;i<m;i++){
    z=1;
    //Logic based on property (a*b)%n=((a%n)*(b%n))%n
    for (int j=1;j<=n;j++){
        z*=i;
        z=z%m;
        }
        z=z%m;
        if (z==y){
        cout<<i<<' ';
        flag=1;
        }
}
if (!flag) cout<<-1;
return 0;
}
