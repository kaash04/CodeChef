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
    ll n, m, tmp, s = 0;
    scanf("%lld %lld", &n, &m);
    // std::set<ll> q; // q[m], s[n]
    fi(i, 0, m)
    {
        sl(tmp);
        // q.insert(tmp);
        s += tmp;
    }
    ll total = (n * (n + 1)) / 2;
    // fi(i, 1, n + 1)
    //      if (q.find(i) == q.end())
    //           s += i;
    ll res = total - s;
    printf("%lld", res);
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