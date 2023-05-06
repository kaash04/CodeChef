#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

#define fi(a, b, c) \
    for (ll a = b; a < c; a++)

#define fd(a, b, c) \
    for (ll a = b; a > c; a--)

typedef std::vector<long long> vll;
typedef long long ll;

/************************************************************************/
void jaadu()
{
    ll n;
    scanf("%lld", &n);
    ll arr[n], mini = 100, counter = 0;
    fi(i, 0, n)
    {
        scanf("%lld", &arr[i]);
        if (arr[i] < mini)
            mini = arr[i];
    }
    fi(i, 0, n)
        if(arr[i] == mini)
            counter++;
    printf("%lld\n", n-counter);
}
/************************************************************************/
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t;
    scanf("%lld", &t);
    while (t--)
        jaadu();
    return 0;
}