#include<stdio.h>
#include<iostream>
int n;

using namespace std;

int main(){
int **a;
cin>>n;
a = new int *[n];
int i,j, diag;
for (i = 0; i < n; i++ )
{
    a[i] = new int[n];
}

for (i=0;i<n;i++)
    {
       for (j=0;j<n;j++)
       {
         a[i][j]=0;
       }
    }
for (i=0;i<n;i++){
    for (j=0;j<n;j++){
        scanf("%d", &a[i][j]);
    }
}
diag=((n*n)-((n*(n-1))/2));
int ctr=0;
if (ctr<diag){
for (i=0;i<n;i++){
    int k=i;
    for (j=0;j<=i;j++){
        printf ("%d %c", a[k][j], ' ');
        k--;
        ctr++;
        }
    }
}
for (i=n-1;i>0;i--){
    int k=n-1;
    for (j=n-i;j<n;j++){
        printf ("%d %c", a[k][j], ' ');
        k--;
        ctr++;
    }
}
return 0;
}
