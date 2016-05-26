#include<stdio.h>
using namespace std;

int main()
{
int k,n;
scanf("%d %d",&k, &n);
int *a;
a = new int[n];
int carry=0;
for (int i=0;i<n;i++){
    scanf("%d", &a[i]);
    if (a[i]+carry>k){
        carry+=a[i]-k;
        }
    else{
        carry=0;
        }
    }
printf("%d", carry);
return 0;
}
