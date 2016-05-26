#include<iostream>

using namespace std;

int main(){
int a, b, c=0, i, x[10];
cin>>a>>b;
for (i=0;i<10;i++){
    cin>>x[i];
}
for (i=0;i<10;i++){
    c+=x[i]*20;
}
if (b-c>a){
    cout<<"No chance.";
}
else if (b-c<a){
    cout<<"Dirty debug :(";
}
else if (b-c==a){
    cout<<"No chance.";
}
return 0;
}
