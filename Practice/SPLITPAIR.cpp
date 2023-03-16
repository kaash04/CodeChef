#include <bits/stdc++.h>

#define nl printf("\n")
#define sl(a) scanf("%lld", &a)

#define fi(a, b, c) \
    for (ll a = b; a < c; a++)

#define fd(a, b, c) \
    for (ll a = b; a > c; a--)

typedef std::vector<long long> vll;
typedef long long ll;

/************************************************************************/
void jaadu()
{
    ll inp;
    sl(inp);
    if (inp & 1)
    {
        inp /= 10;
        while (inp != 0)
        {
            ll rem = inp % 10;
            if (rem & 1)
            {
                printf("YES\n");
                return;
            }
            inp /= 10;
        }
    }
    else
    {
        inp /= 10;
        while (inp != 0)
        {
            ll rem = inp % 10;
            if (!(rem & 1))
            {
                printf("YES\n");
                return;
            }
            inp /= 10;
        }
    }
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