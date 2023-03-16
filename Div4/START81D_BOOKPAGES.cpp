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
    ll books, sum = 0, temp;
    sl(books);
    fi(i, 0, books)
    {
        sl(temp);
        sum += temp;
    }
    if (sum & 1)
        printf("NO");
    else
        printf("YES");
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