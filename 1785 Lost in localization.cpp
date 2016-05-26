#include<stdio.h>
using namespace std;

int main()
{
    int n[2001];
    int ctr=-1;
    while(scanf("%d",&n[++ctr])!=EOF);
    for(int i=0;i<ctr;i++)
    {
        if ((n[i]>=1)&&(n[i]<=4))
        {
            printf("%s\n","few");
        }
        else if ((n[i]>=5)&&(n[i]<=9))
        {
            printf("%s\n","several");
        }
        else if ((n[i]>=10)&&(n[i]<=19))
        {
            printf("%s\n","pack");
        }
        else if ((n[i]>=20)&&(n[i]<=49))
        {
            printf("%s\n","lots");
        }
        else if ((n[i]>=50)&&(n[i]<=99))
        {
            printf("%s\n","horde");
        }
        else if ((n[i]>=100)&&(n[i]<=249))
        {
            printf("%s\n","throng");
        }
        else if ((n[i]>=250)&&(n[i]<=499))
        {
            printf("%s\n","swarm");
        }
        else if ((n[i]>=500)&&(n[i]<=999))
        {
            printf("%s\n","zounds");
        }
        else if (n[i]>=1000)
        {
            printf("%s\n","legion");
        }
    }
    return 0;
}
