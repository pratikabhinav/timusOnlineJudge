#include<stdio.h>
using namespace std;

int main()
{
int m,n;
scanf("%d %d", &m, &n);
int ctr1=0, ctr2=0, i;
for (i=0;i<m;i++){
    ctr1++;
    }
for (i=0;i<=n;i++){
    ctr2++;
    }
printf("%d", ctr1*ctr2);
return 0;
}
