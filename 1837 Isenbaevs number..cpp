#include<iostream>
#include<string>

using namespace std;

class isen{
public:
 string name[3];
 int num;
 isen{
    num=-1;
 }
};

int main(){
int n, i, j, root, temp, ctr=0;
string x;
cin>>n;
isen *list= new isen[n];
for (i=0;i<n;i++){
    for (j=0;j<3;j++){
        cin>>list[i].name[j];
        if (list[i].name[j]=="Isenbaev"){
            root=i;
            list[i].num[j]=ctr;
            ctr++;
        }
    }
}

for (i=0;i<3;i++){
    if (list[root].name[i]!="Isenbaev"){
        list[root].num[i]=ctr;
        x=list[root].name[i];
    }
}


return 0;
}
