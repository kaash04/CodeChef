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
bool isPresent(ll arr[], int a, int b, float key)
{
    fi(i, a, b + 1)
    {
        if (arr[i] == key)
            return 1;
    }
    return 0;
}
void jaadu()
{
    ll n;
    sl(n);
    ll arr[n];
    fi(i, 0, n)
        sl(arr[i]);
    fi(i, 0, n - 1)
    {
        fi(j, i + 1, n)
        {
            if (isPresent(arr, i, j, float(arr[i] + arr[j]) / 2))
            {
                printf("NO");
                nl;
                return;
            }
        }
    }
    printf("YES\n");
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