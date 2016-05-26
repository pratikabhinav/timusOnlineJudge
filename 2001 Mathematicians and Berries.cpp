#include<stdio.h>
using namespace std;

int main()
{
int a[3][2];
int x=0,y=0,i ,j;
for (i=0;i<3;i++){
    for(j=0;j<2;j++){
        scanf("%d", &a[i][j]);
        }
    }
x=a[0][0]-a[2][0];
y=a[0][1]-a[1][1];
printf("%d %d", x, y);
return 0;
}
