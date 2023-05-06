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
    ll n;
    sl(n);
    char given[n];
    std::string ans;
    scanf("%s", given);
    fi(i, 0, n)
    {
        ll count = 1;
        fi(j, i, n - 1)
        {
            if (given[j] == given[j + 1])
                count++;
            else
                break;
        }

        if (!(count & 1))
        {
            ans.push_back(given[i]);
        }
        ans.push_back(given[i]);
        i += count - 1;
    }
    // printf("%s", ans);
    std::cout << ans;
    nl;
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