#include <bits/stdc++.h>

#define ll long long
#define nl printf("\n")

#define loop(a, b, c) \
    for (int i = a; i < b; i += c)

typedef std::vector<long long> vll;

/************************************************************************/
void jaadu()
{
    ll n;
    scanf("%lld", &n);
    if (n & 1)
    {
        printf("-1\n");
        return;
    }

    ll perm[n], val=2;
    loop(0, n, 2)
    {
        perm[i] = val;
        val += 2;
    }
    val = 1;
    loop(1, n, 2)
    {
        perm[i] = val;
        val += 2;
    }

    loop(0, n, 1)
        printf("%lld ", perm[i]);
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