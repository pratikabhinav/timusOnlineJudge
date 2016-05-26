#include<iostream>
#include<string.h>

using namespace std;

class team{
    public:
        string name;
        int count;
        team(){
            count=1;
        }
};

int main(){
    int n, i, j, x=0;
    cin>>n;
    team *object= new team[n];
    for (i=0;i<n;i++){
        cin>>object[x].name;
        x++;
        for (j=0;j<x-1;j++){
            if (object[x-1].name==object[j].name){
                object[j].count+=1;
                x--;
                break;
            }
        }
    }
    for (i=0;i<n;i++){
        if (object[i].count>=2){
            cout<<object[i].name<<'\n';
        }
    }
    return 0;
}