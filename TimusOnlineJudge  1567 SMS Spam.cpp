#include<iostream>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
using namespace std;

#define ll long long

int main(){
char line[1001];
cin.getline(line, 1001);
int cost=0, len, i;
len= strlen(line);
for (i=0;i<len;i++){
if ((line[i]=='a')||(line[i]=='d')||(line[i]=='g')||(line[i]=='j')||(line[i]=='m')||(line[i]=='p')||(line[i]=='s')||(line[i]=='v')||(line[i]=='y')||(line[i]=='.')||(line[i]==' ')){
    cost+=1;
}
else if ((line[i]=='b')||(line[i]=='e')||(line[i]=='h')||(line[i]=='k')||(line[i]=='n')||(line[i]=='q')||(line[i]=='t')||(line[i]=='w')||(line[i]=='z')||(line[i]==',')){
    cost+=2;
}
else if ((line[i]=='c')||(line[i]=='f')||(line[i]=='i')||(line[i]=='l')||(line[i]=='o')||(line[i]=='r')||(line[i]=='u')||(line[i]=='x')||(line[i]=='!')){
    cost+=3;
}
}
cout<<cost;
return 0;
}
