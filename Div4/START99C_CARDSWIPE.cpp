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
void jaadu()
{
    ll swipes, ppl = 0, max = 0;
    sl(swipes);
    ll arr[swipes + 1] = {0};
    fi(i, 0, swipes)
    {
        ll tmp;
        scanf("%lld", &tmp);
        if (arr[tmp] == 0)
        {
            ppl++;
            arr[tmp] = 1;
            if (ppl > max)
                max = ppl;
        }
        else
        {
            ppl--;
            arr[tmp] = 0;
        }
    }
    printf("%lld\n", max);
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