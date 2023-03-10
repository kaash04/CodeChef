#include <bits/stdc++.h>

#define ll long long
#define nl printf("\n")

#define loop(a, b, c) \
    for (int i = a; i != b; i += c)

typedef std::vector<long long> vll;

/************************************************************************/
void jaadu()
{
    int t;
    scanf("%d", &t);
    if (t > 24)
        printf("YES\n");
    else
        printf("NO\n");
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