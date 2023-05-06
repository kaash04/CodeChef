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
    ll r;
    sl(r);
    printf("%lld", r * 100);
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