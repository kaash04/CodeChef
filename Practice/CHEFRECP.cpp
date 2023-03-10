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
    scanf("%lld", &n);
    ll arr[n], cpy[n];
    vll freq;
    loop(0, n, 1)
    {
        scanf("%lld", &arr[i]);
        cpy[i] = arr[i];
    }
    std::sort(cpy, cpy + n);

    ll count = 1;
    loop(1, n, 1)
    {
        if (cpy[i] == cpy[i - 1])
            count++;
        else
        {
            freq.push_back(count);
            count = 1;
        }
    }
    freq.push_back(count);
    std::sort(freq.begin(), freq.end());

    loop(1, freq.size(), 1)
    {
        if (freq.at(i) == freq.at(i - 1))
        {
            printf("NO\n");
            return;
        }
    }

    ll count2 = 1;
    vll freqUnsorted;
    loop(1, n, 1)
    {
        if (arr[i] == arr[i - 1])
            count2++;
        else
        {
            freqUnsorted.push_back(count2);
            count2 = 1;
        }
    }
    freqUnsorted.push_back(count);

    if (freq.size() == freqUnsorted.size())
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