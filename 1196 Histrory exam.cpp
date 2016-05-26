#include<iostream>
#include<stdio.h>
using namespace std;

#define ll long long

int main(){
ll a, b;
scanf("%lld", &a);
int *prof = new int[a];
for (int i=0;i<a;i++){
    scanf("%d", &prof[i]);
}
scanf("%lld", &b);
int *student = new int[b];
for (int i=0;i<b;i++){
    scanf("%d", &student[i]);
}
int ctr=0;
int mid, first, last;
for (int i=0;i<b;i++){
    first=0;
    last=a-1;
    while(first<=last){
        mid=(first+last)/2;
        if (student[i]==prof[mid]){
            ctr++;
            break;
        }
        else if (student[i]<prof[mid]){
            last=mid-1;
        }
        else if (student[i]>prof[mid]){
            first=mid+1;
        }
    }
}
cout<<ctr;
return 0;
}
