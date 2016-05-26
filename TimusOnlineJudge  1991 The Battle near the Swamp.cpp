#include<iostream>

using namespace std;

int main(){
int n, k, i, droids=0, bombs=0;
cin>>n>>k;
int *a= new int[n];
for (i=0;i<n;i++){
    cin>>a[i];
}
for (i=0;i<n;i++){
    if (a[i]<=k){
        droids+=k-a[i];
    }
    else if (a[i]>k){
        bombs+=a[i]-k;
    }
}
cout<<bombs<<' '<<droids;
return 0;
}
