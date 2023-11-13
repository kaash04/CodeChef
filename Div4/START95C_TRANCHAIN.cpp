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
    ll n;
    std::string tmp;
    sl(n);
    ll a = 0, b = 0, ab = 0, o = 0;
    fi(i, 0, n)
    {
        std::cin >> tmp;
        if (tmp == "A")
            a++;
        else if (tmp == "B")
            b++;
        else if (tmp == "O")
            o++;
        else
            ab++;
    }
    ll c1 = o + a + ab, c2 = o + b + ab;
    printf("%lld", std::max({c1, c2}));
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