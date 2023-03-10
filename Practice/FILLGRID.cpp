#include <bits/stdc++.h>

#define ll long long
#define nl printf("\n")

#define loop(a, b, c) \
    for (int i = a; i < b; i += c)

typedef std::vector<long long> vll;

/************************************************************************/
void jaadu()
{
    ll n;
    scanf("%d", &n);
    if (n & 1)
    {
        loop(0, n, 1)
        {
            for (int j = 0; j < n; j++)
            {
                if (i == j)
                    printf("-1 ");
                else
                    printf("1 ");
            }
            nl;
        }
    }
    else
    {
        loop(0, n, 1)
        {
            for (int j = 0; j < n; j++)
                printf("-1 ");
            nl;
        }
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