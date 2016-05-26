#include<iostream>
using namespace std;

#define ll long long

class standing {
    public:
    ll id;
    int m;
    void getData(){
    cin>>id>>m;
    }
    void putData(){
    cout<<id<<' '<<m<<endl;
    }
};

int part(standing*a, int start, int last){
    int pivot=a[last].m;
    int pindex= start;
    for (int i=0;i<last;i++){
        if (a[i].m<=pivot){
            swap(a[i], a[pindex]);
            pindex++;
            }
        }
    swap(a[pindex],a[last]);
    return pindex;
}

void quicksort (standing *a, int start, int last){
    if (start<last){
    int pindex= part(a, start, last);
    quicksort(a,start, pindex-1);
    quicksort(a,pindex+1, last);
    }
}


int main(){
int i;
ll n;
int last;
cin>>n;
last=n-1;
standing *a= new standing[n];
for (i=0;i<n;i++){
    a[i].getData();
}
quicksort(a,0,last);
for (i=0;i<n;i++){
    a[i].putData();
}
return 0;
}

/*void standing::getData(){
    cin>>id>>m;
}

void standing::putData(){
    cout<<id<<' '<<m;
    cout<<endl;
}
*/
