#include<iostream>
#include<stdio.h>
using namespace std;

int main(){
int n, a, i;
float perc;
float b;
cin>>n>>a;
int *x= new int[a];
b= (int) a;
for (i=0;i<a;i++){
cin>>x[i];
}
int k=1;
while (n--){
        float ctr=0;
    for (i=0;i<a;i++){
        if (x[i]==k){
            ctr++;
        }
    }   perc=(float)(ctr/b)*100.0;
        printf("%.2f%c\n",perc,'%');
        k++;
}
return 0;
}
