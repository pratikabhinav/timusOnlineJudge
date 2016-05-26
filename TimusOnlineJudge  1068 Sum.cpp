#include<iostream>
#include<stdio.h>
using namespace std;

#define ll long long
int main(){
ll sum=0;
int n, i;
cin>>n;
if (n<0){
for (i=n; i<=1; i++){
    sum+=i;
    }
}
else if (n>0){
for (i=1;i<=n;i++){
    sum+=i;
    }
}
else
    sum=1;
cout<<sum;
return 0;
}
