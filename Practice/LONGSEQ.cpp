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
    std::string num;
    std::cin >> num;
    ll freqOne = 0;
    fi(i, 0, num.size())
    {
        if (num.at(i) == '1')
            freqOne++;
    }
    if (freqOne == 1 || freqOne == num.size() - 1)
        printf("Yes\n");
    else
        printf("No\n");
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