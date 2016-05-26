#include<stdio.h>
using namespace std;

int main()
{
int a,b;
scanf("%d %d", &a, &b);

if (a<=b)
{
    printf("%d",2);
}
else if (2*a%b==0)
    {
    printf("%d", 2*a/b);
    }
else
    printf("%d", 2*a/b+1);
return 0;
}
