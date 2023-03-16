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
    ll n;
    sl(n);
    vll arr;
    fi(i, 0, n)
    {
        ll t;
        sl(t);
        arr.push_back(t);
    }
    std::sort(arr.begin(), arr.end());
    printf("%lld\n", arr.at(0) * (n - 1));
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