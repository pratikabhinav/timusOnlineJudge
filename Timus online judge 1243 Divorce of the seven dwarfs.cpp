#include<cstdio>
#include<string>
#include<iostream>
using namespace std;

#define ll long long

int main(){
string n;
int ans=0;
cin>>n;
for (int i=0;i<n.length();i++){
    ans=(ans*10+n[i]-'0')%7;
}
cout<<ans<<endl;
return 0;
}
