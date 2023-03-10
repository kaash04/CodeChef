#include <bits/stdc++.h>

#define ll long long
#define nl printf("\n")

#define loop(a, b, c) \
    for (int i = a; i != b; i += c)

typedef std::vector<long long> vll;

/************************************************************************/
void jaadu()
{
    int boss, attack, special;
    scanf("%d %d %d", &boss, &attack, &special);
    int count = 1;
    boss -= special;
    if (boss % attack != 0)
        count++;
    count += boss / attack;
    printf("%d\n", count);
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