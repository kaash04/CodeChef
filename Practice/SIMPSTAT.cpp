#include <bits/stdc++.h>

#define nl printf("\n")
#define sl(a) scanf("%lld", &a)

#define fi(a, b, c) \
    for (ll a = b; a < c; i++)

#define fd(a, b, c) \
    for (ll a = b; a > c; i--)

typedef std::vector<long long> vll;
typedef long long ll;

/************************************************************************/
void jaadu()
{
    ll n, k, sum = 0, sub = 0;
    scanf("%lld %lld", &n, &k);
    ll orig[n];
    fi(i, 0, n)
    {
        sl(orig[i]);
        sum += orig[i];
    }
    std::sort(orig, orig + n);
    fi(i, 0, k)
    {
        sub += orig[i];
        sub += orig[n - i - 1];
    }
    printf("%lf\n", double(sum - sub) / double(n - (2 * k)));
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