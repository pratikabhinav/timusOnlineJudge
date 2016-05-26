#include<iostream>

using namespace std;

int main(){
int alien=0, sci=0, a, b, i, n, k, x;
cin>>n>>k;
for (i=0;i<n;i++){
    cin>>a>>b;
    alien+=a;
    sci+=b;
}
alien=alien+k-((n+1)*2);
x= alien-sci;
if (x<0){
    cout<<"Big Bang!";
}
else cout<<x;
return 0;
}
