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
    ll n, count = 0;
    vll x;
    sl(n);
    ll b[n], c[n];
    fi(i, 0, n)
    {
        sl(b[i]);
        c[i] = b[i] * pow(2, i);
    }
    fi(i, 0, n)
    {
        if (b[i] == -1)
        {
            x.push_back(i + 1);
        }
    }
    fi(i, 0, x.size())
    {
        count += x.at(i);
    }
    ll p;
    if (n & 1)
        p = (n * ((n + 1) / 2)) - count;
    else
        p = ((n + 1) * (n / 2)) - count;

    if (count > p)
        printf("%lld", count - p);
    else
        printf("%lld", p - count);

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