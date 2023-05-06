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
    ll mat[n][n] = {0};
    ll odd = 1, even = 2;
    fi(i, 0, n)
    {
        fi(j, 0, n)
        {
            if (odd <= n * n)
            {
                // mat[i][j] = odd;
                printf("%lld ", odd);
                odd += 2;
            }
            else
            {
                // mat[i][j] = even;
                printf("%lld ", even);
                even += 2;
            }
        }
        printf("\n");
    }
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