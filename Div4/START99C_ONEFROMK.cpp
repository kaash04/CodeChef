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
    ll len, total = 0;
    sl(len);
    ll arr[len];
    fi(i, 0, len)
    {
        sl(arr[i]);
        total += arr[i];
    }
    std::sort(arr, arr + len);
    fi(i, 0, len)
    {
        printf("%lld ", total);
        total -= arr[i];
    }
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