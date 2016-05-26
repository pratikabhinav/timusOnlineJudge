#include<iostream>
using namespace std;

int main()
{
int n,ctre=0, ctro=0,i;
cin>>n;
for (i=1;i<=n;i++){
    if (i%2==0)
    ctre++;
    else
    ctro++;
}
if ((ctre%2==0) && (ctro%2==0))
cout<<"black";
else
cout<<"grimy";
return 0;
}
