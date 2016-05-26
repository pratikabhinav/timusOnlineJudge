#include<iostream>
using namespace std;

int main(){
int a, b, time1=0, time2=0;
cin>>a>>b;
time1=120+2*(b-40);
time2=119+2*(a-40);
cout<<(time1>time2?time1:time2);
return 0;
}
