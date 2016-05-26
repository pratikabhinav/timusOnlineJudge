#include<iostream>
#include<string>
using namespace std;

int main(){
int n, x=1, flag=0;
cin>>n;
string spam[50];
string *str= new string[n];
if (str==NULL)
    return 0;
for (int i=0;i<n;i++){
    cin>>str[i];
}
for (int i=0;i<n;i++){
    for (int j=0;i<n;j++){
        if (str[i]==str[j]){
            for (int k=0;k<x;k++){
                if (spam[k]==str[i]){
                    flag=1;
                }
            }
            if (flag==0){
                spam[x-1]=str[i];
                x++;
            }
        }
    }
}
for (int k=0;k<x;k++){
    cout<<spam[k]<<endl;
}
return 0;
}
