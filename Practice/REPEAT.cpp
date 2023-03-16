#include <bits/stdc++.h>

#define nl printf("\n")
#define sl(a) scanf("%lld", &a)

#define fi(a, b, c) \
    for (ll a = b; a < c; a++)

#define fd(a, b, c) \
    for (ll a = b; a > c; a--)

typedef std::vector<long long> vll;
typedef long long ll;

/*************************  SOLUTION  ***************************************/
void jaadu()
{
    ll n, k, s;
    scanf("%lld %lld %lld", &n, &k, &s);
    printf("%lld\n", (s - (n * n)) / (k - 1));
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