#include<iostream>

using namespace std;

int main(){
int move=0, pos=1, target=1, n;
char name[30];
cin>>n;
while (n--){
cin>>name;
if (name[0]=='A'||name[0]=='P'||name[0]=='O'||name[0]=='R')
target=1;
if (name[0]=='B'||name[0]=='M'||name[0]=='S')
target=2;
if (name[0]=='D'||name[0]=='G'||name[0]=='J'||name[0]=='K'||name[0]=='T'||name[0]=='W')
target=3;
if (target-pos==0)
move+=0;
else if (target-pos==1){
    move+=1;
    pos++;
    }
else if (target - pos==2){
    move+=2;
    pos=pos+2;
    }
else if (pos-target==1){
    move+=1;
    pos--;
    }
else if (pos-target == 2){
    move+=2;
    pos=pos-2;
    }
}
cout<<move;
return 0;
}
