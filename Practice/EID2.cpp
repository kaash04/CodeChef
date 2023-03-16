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
    ll a1, a2, a3, m1, m2, m3;
    scanf("%lld %lld %lld %lld %lld %lld", &a1, &a2, &a3, &m1, &m2, &m3);
    int count = 0;
    if ((a1 == a2 && m1 == m2) || (a1 > a2 && m1 > m2) || (a1 < a2 && m1 < m2))
        count++;
    if ((a1 == a3 && m1 == m3) || (a1 > a3 && m1 > m3) || (a1 < a3 && m1 < m3))
        count++;
    if ((a3 == a2 && m3 == m2) || (a3 > a2 && m3 > m2) || (a3 < a2 && m3 < m2))
        count++;

    if (count == 3)
        printf("FAIR\n");
    else
        printf("NOT FAIR\n");
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