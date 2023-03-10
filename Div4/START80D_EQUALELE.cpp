#include <bits/stdc++.h>

#define ll long long
#define nl printf("\n")

#define loop(a, b, c) \
    for (int i = a; i != b; i += c)

typedef std::vector<long long> vll;

/************************************************************************/
void jaadu()
{
    ll n;
    scanf("%lld", &n);
    ll arr[n];
    loop(0, n, 1)
        scanf("%lld", &arr[i]);
    std::sort(arr, arr + n);
    int maxFreq = 1;
    int freq = 1;
    loop(0, n - 1, 1)
    {
        if (arr[i] == arr[i + 1])
            freq++;
        else
            freq = 1;
            
        if (freq > maxFreq)
            maxFreq = freq;
    }
    printf("%d\n", n - maxFreq);
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