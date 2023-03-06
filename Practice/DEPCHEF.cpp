#include <bits/stdc++.h>

#define ll long long
#define nl printf("\n")

#define loop(a, b, c) \
    for (int i = a; i != b; i += c)

typedef std::vector<long long> vll;

/************************************************************************/
void jaadu()
{
    ll n;
    scanf("%lld", &n);
    vll attacks, defenses;
    loop(0, n, 1)
    {
        ll a;
        scanf("%lld", &a);
        attacks.push_back(a);
    }
    loop(0, n, 1)
    {
        ll a;
        scanf("%lld", &a);
        defenses.push_back(a);
    }

    int shieldVal = -1;
    int left, right;
    loop(0, n, 1)
    {
        if (i == 0)
        {
            left = n - 1;
            right = 1;
        }
        else if (i == n - 1)
        {
            left = n - 2;
            right = 0;
        }
        else
        {
            left = i - 1;
            right = i + 1;
        }
        if (defenses.at(i) > (attacks.at(left) + attacks.at(right)) && defenses.at(i) > shieldVal)
        {
            shieldVal = defenses.at(i);
        }
    }
    printf("%d\n", shieldVal);
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