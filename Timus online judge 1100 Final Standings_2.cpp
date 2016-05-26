#include <cstdio>
#include <algorithm>

using namespace std;

class standing {
    public:
    int id;
    int solve;
} ;

bool cmp (standing p, standing q)
{
    if ( p.solve > q.solve ) return true;
    return false;
}

int main ()
{
int n;
scanf ("%d", &n);
standing *a= new standing[n];
for ( int i = 0; i < n; i++ ) scanf ("%d %d", &a [i].id, &a [i].solve);
stable_sort (a, a + n, cmp);
for ( int i = 0; i < n; i++ ) printf ("%d %d\n", a [i].id, a [i].solve);
return 0;
}
