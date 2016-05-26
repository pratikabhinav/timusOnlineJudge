#include<stdio.h>
#include<iostream>
#define ll long long

using namespace std;

int main(){
int a[1000], i, n, temp, ctr=1;
cin>>n;
for (i=0;i<n;i++){
    cin>>a[i];
}
for (i=0;i<n;i++){
    temp=a[i];
    if (temp==a[i+1]){
    ctr++;
    }
    else if (temp!=a[i+1]){
    printf("%d %d%c", ctr, temp,' ');
    ctr=1;
    }
}
return 0;
}
