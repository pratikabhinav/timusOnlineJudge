#include<stdio.h>
#include<iostream>

using namespace std;
int cboard[8][8]={
    2,3,4,4,4,4,3,2,
    3,4,6,6,6,6,4,3,
    4,6,8,8,8,8,6,4,
    4,6,8,8,8,8,6,4,
    4,6,8,8,8,8,6,4,
    4,6,8,8,8,8,6,4,
    3,4,6,6,6,6,4,3,
    2,3,4,4,4,4,3,2};

int main(){
   char letter;
   int digit,i,intletter,n;
   scanf("%d", &n);
   for(i=0;i<n;i++){
    scanf(" %c%d",&letter,&digit);
    intletter=int(letter)-97;
    digit--;
    printf("%d\n", cboard[intletter][digit]);
}
return 0;
}
