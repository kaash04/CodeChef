#include <bits/stdc++.h>

#define ll long long int
#define nl printf("\n")
#define vec(type, name) std::vector<type> name

#define arrin(arr, n)           \
    for (int i = 0; i < n; i++) \
    scanf("%d", &arr[i])

#define arrout(arr, n)          \
    for (int i = 0; i < n; i++) \
    printf("%d ", arr[i])

/************************************************************************/
void jaadu()
{
    ll r, g, b, k, ans = 0;
    scanf("%lld %lld %lld %lld", &r, &g, &b, &k);
    ll mini = std::min({r, g, b});
    ll maxi = std::max({r, g, b});
    if (k <= mini)
        ans = (3 * (k - 1)) + 1;
    if (k <= (r ^ g ^ b ^ mini ^ maxi) && k > mini)
        ans = (2 * (k - 1)) + 1 + mini;
    if (k <= maxi && k > (r ^ g ^ b ^ mini ^ maxi))
        ans = mini + (r ^ g ^ b ^ mini ^ maxi) + k;
    // k <= maxi, k > mid
    // printf("%lld\n", (r ^ g ^ b ^ mini ^ maxi));
    printf("%lld\n", ans);
}
/************************************************************************/
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        jaadu();

    return 0;
}