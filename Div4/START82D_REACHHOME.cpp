#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

#define fi(a, b, c) \
    for (ll a = b; a < c; a++)

#define fd(a, b, c) \
    for (ll a = b; a > c; a--)

typedef std::vector<long long> vll;
typedef long long ll;

/************************************************************************/
void jaadu()
{
    ll fuel, dist;
    scanf("%lld %lld", &fuel, &dist);
    if (fuel*5 >= dist)
        printf("YES\n");
    else
        printf("NO\n");
}
/************************************************************************/
int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
        jaadu();
    return 0;
}