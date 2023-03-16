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
    ll n;
    sl(n);
    ll arr[n], max = 0, distinct = 0;
    fi(i, 0, n)
    {
        sl(arr[i]);
        if (arr[i] > max)
            max = arr[i];
    }
    ll freq[max + 1] = {0};
    std::sort(arr, arr + n);
    bool moreThan2 = false;
    fi(i, 0, n)
        freq[arr[i]]++;
    fi(i, 1, max + 1)
    {
        if (freq[i] == 1)
            distinct++;
        if (freq[i] > 2)
            moreThan2 = true;
    }
    if (distinct == 1 && arr[n - 1] != arr[n - 2] && !moreThan2)
        printf("2\n");
    else
        printf("%lld\n", (distinct + 1) / 2);
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