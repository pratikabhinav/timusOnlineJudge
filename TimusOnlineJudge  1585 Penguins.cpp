#include<iostream>
#define ll long long

using namespace std;

int main(){
int n, ctre=0, ctrl=0, ctrm=0, temp;
char name[30];
cin>>n;
for (int i=0;i<n+1;i++){
cin.getline(name,30);
if (name[0]=='E')
    ctre++;
else if (name[0]=='L')
    ctrl++;
else if (name[0]=='M')
    ctrm++;
}
temp= (ctre>ctrl?ctre:ctrl);
int largest= (ctrm>temp?ctrm:temp);
if (largest==ctrm)
    cout<<"Macaroni Penguin";
else if (largest==ctrl)
    cout<<"Little Penguin";
else if (largest==ctre)
    cout<<"Emperor Penguin";
return 0;
}
