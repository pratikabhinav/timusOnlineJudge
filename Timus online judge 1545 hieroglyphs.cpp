#include<iostream>
#include<string>

using namespace std;

int main(){
int n;
char ch;
cin>>n;
string *latin= new string[n];
for (int i=0;i<n;i++){
    cin>>latin[i];
}
cin>>ch;
for (int i=0;i<n;i++){
    if (latin[i][0]==ch){
        cout<<latin[i]<<endl;
    }
}
return 0;
}
