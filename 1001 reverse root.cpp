#include<stdio.h>
#include<math.h>
double input[1000000];
using namespace std;

int main()
{
    int ctr=-1;
    while (scanf("%lf",&input[++ctr])!=EOF);
    for (;ctr>0;)
    {
     printf("%.4lf\n",sqrt(input[--ctr]));
    }
    return 0;
}
