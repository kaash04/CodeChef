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
ll gp(ll ct, ll guest, ll in[], ll out[])
{
    ll count = 0;
    fi(i, 0, guest) if (ct >= in[i] && ct < out[i])
        count++;
    return count;
}
void jaadu()
{
    ll guests;
    sl(guests);
    ll inTime[guests], outTime[guests];
    ll s = 1001, l = 0;
    fi(i, 0, guests)
    {
        sl(inTime[i]);
        if (inTime[i] < s)
            s = inTime[i];
    }
    fi(i, 0, guests)
    {
        sl(outTime[i]);
        if (outTime[i] > l)
            l = outTime[i];
    }
    ll maxCount = 1;
    fi(i, s, l) if (gp(i, guests, inTime, outTime) > maxCount)
        maxCount = gp(i, guests, inTime, outTime);
    printf("%lld", maxCount);
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