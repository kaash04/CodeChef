#include <bits/stdc++.h>

#define nl printf("\n")

#define sl(x) scanf("%lld", &x);

#define fi(a, b, c) \
    for (ll a = b; a < c; a++)

#define fd(a, b, c) \
    for (ll a = b; a > c; a--)

typedef std::vector<long long> vll;
typedef long long ll;

/* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ */
void jaadu()
{
    ll bells, x, rang, initial, ans;
    scanf("%lld %lld %lld %lld", &bells, &x, &rang, &initial);
    ll diff = rang - x;
    if (diff < 0)
    {
        ans = initial + (10 * rang);
    }
    else
    {
        ans = initial + (5 * diff) + (10 * x);
    }
    if (bells == rang)
        ans += 20;
    printf("%lld", ans);
    nl;
}
/* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ */
int main()
{
    ll t;
    scanf("%lld", &t);
    while (t--)
        jaadu();
    return 0;
}