#include<cstdio>
#include<iostream>

using namespace std;

#define ll long long

int main(){
int a, b;
char c;
scanf("%d%c", &a, &c);
b=(int)c-64;
if (a>=1&&a<=2){
    if (b==1||b==4)
        cout<<"window";
    else if (b==2||b==3)
        cout<<"aisle";
}
if (a>=3&&a<=20){
    if (b==1||b==6)
        cout<<"window";
    else if (b==2||b==3||b==4||b==5)
        cout<<"aisle";
}
if (a>=21&&a<=65){
    if (b==1||b==11)
        cout<<"window";
    else if (b==3||b==4||b==7||b==8)
        cout<<"aisle";
    else cout<<"neither";
}
return 0;
}
