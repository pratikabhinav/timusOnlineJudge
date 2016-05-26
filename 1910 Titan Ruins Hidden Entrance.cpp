#include<stdio.h>
using namespace std;

int main(){
int n, i, j, flag, temp=0;
scanf("%d", &n);
int *a= new int[n];
for (i=0;i<n;i++){
    scanf("%d", &a[i]);
}
int sum=0;
for (i=0;i<3;i++){
    sum+=a[i];
    flag=2;
}
for (i=1;i+3<n+1;i++){
    temp=a[i]+a[i+1]+a[i+2];
    if (temp>sum){
    flag=i+2;
    sum=temp;
    }
}
printf("%d %d", sum, flag);
return 0;
}
