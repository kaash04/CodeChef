#include <bits/stdc++.h>

#define nl printf("\n")

#define loop(a, b, c) \
    for (int i = a; i != b; i += c)

typedef std::vector<long long> vll;
typedef long long ll;

/************************************************************************/
void jaadu()
{
    ll days;
    scanf("%lld", &days);
    ll alice[days], bob[days];
    loop(0, days, 1)
        scanf("%lld", &alice[i]);
    loop(0, days, 1)
        scanf("%lld", &bob[i]);

    int count = 0;
    loop(0, days, 1) if (!(bob[i] > alice[i] * 2) && !(alice[i] > bob[i] * 2))
        count++;

    printf("%d\n", count);
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