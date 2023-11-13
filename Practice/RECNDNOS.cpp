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
    ll len;
    sl(len);
    ll arr[len];
    fi(i, 0, len)
        sl(arr[i]);
    ll maxCount = 1, ans = arr[0];
    fi(i, 0, len)
    {
        ll count = 1;
        fi(j, i + 2, len)
        {
            if (arr[i] == arr[j])
            {
                count++;
                j++;
            }
        }
        if (count > maxCount)
        {
            ans = arr[i];
            maxCount = count;
        }
        if (count == maxCount && ans > arr[i])
            ans = arr[i];
        }
    printf("%lld", ans);
    nl;
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