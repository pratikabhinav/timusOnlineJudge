#include<iostream>
using namespace std;
int main(){
int a,b,c,d;
cin>>a>>b>>c>>d;
while(a<=c)
{
a=a+b;
if(a>c)
    a=c;
c=c-d;
}
cout<<a;
return 0;
}
