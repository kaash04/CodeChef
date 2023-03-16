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
    ll friends, weight;
    sl(friends);
    sl(weight);
    if (friends > 8)
    {
        printf("NO\n");
        return;
    }
    if (friends * weight > 500)
    {
        printf("NO\n");
        return;
    }

    printf("YES\n");
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