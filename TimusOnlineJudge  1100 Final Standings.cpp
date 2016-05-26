#include<iostream>

using namespace std;

#define ll long long

class standings{
    public:
    long int id;
    int m;
};

int main(){
long int n;
int i, j, tempid, tempm;
cin>> n;
standings *a=new standings[n];
for (i=0;i<n;i++){
    cin>>a[i].id>>a[i].m;
}
for (i=0;i<n;i++){
    for (j=0;j<(n-i)-1;j++){
        if (a[j].m<a[j+1].m){
            tempid=a[j].id;
            tempm=a[j].m;
            a[j].id=a[j+1].id;
            a[j].m=a[j+1].m;
            a[j+1].id=tempid;
            a[j+1].m=tempm;
        }
    }
}
for (i=0;i<n;i++){
    cout<<a[i].id<<' '<<a[i].m;
    cout<<endl;
}
return 0;
}
