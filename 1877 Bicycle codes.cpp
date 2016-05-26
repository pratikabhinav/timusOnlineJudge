#include<stdio.h>
using namespace std;

int main()
{
int a[2];
scanf("%d %d",&a[0], &a[1]);
if ((a[0]%2==0)||(a[1]%2!=0))
{
    printf("%s","yes");
}
else
    printf("%s", "no");
return 0;
}
