#include<iostream>
#include<string.h>
#include<cmath>
using namespace std;

int main(){
int sum=0, i, l;
char a[52];
cin>>a;
l=strlen(a);
int k=l-1;
for (i=0;i<l;i++){
    int temp=0;
    int b= pow (10, k);
    temp=(a[i]-'0')*b;
    temp=temp%7;
    sum=sum+temp;
    k--;
}
sum=sum%7;
cout<<sum;
return 0;
}
