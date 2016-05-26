#include<iostream>

using namespace std;

#define ll long long;

int main(){
int **p, i, j;
int n, ctr=1, total;
cin>>n;
total=n*n;
p=new int *[n];
for (i=0;i<n;i++){
p[i]= new int [n];
}
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        p[i][j]=0;
    }
}
int midone= ((n*(n-1))/2)+ctr;
for (i=0;i<n;i++){
        int k=i;
    for (j=0;j<n-i;j++){
        p[k][j]=midone;
        midone++;
        k++;
    }
}
for (i=n-1;i>0;i--){
        int x=i;
    for (j=0;j<n-i;j++){
        p[j][x]=ctr;
        ctr++;
        x++;
    }
}
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        cout<<p[i][j]<<' ';
    }
    cout<<endl;
}
return 0;
}
