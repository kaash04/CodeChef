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
    ll cars, outlets, hr, tmp;
    scanf("%lld %lld %lld", &cars, &outlets, &hr);
    vll capacity, power;
    fi(i, 0, cars)
    {
        sl(tmp);
        capacity.push_back(tmp);
    }
    fi(i, 0, outlets)
    {
        sl(tmp);
        power.push_back(tmp);
    }
    std::sort(capacity.begin(), capacity.end());
    std::sort(power.begin(), power.end());
    std::vector<std::pair<int, int>> p;
    for (int i = std::min({cars, outlets}) - 1; i >= 0; i--)
    {
        p.push_back({capacity.back(), power.back()});
        capacity.pop_back();
        power.pop_back();
    }
    ll res = 0;
    for (int i = 0; i < p.size(); i++)
    {
        if (p.at(i).first > p.at(i).second * hr)
            res += p.at(i).second * hr;
        else
            res += p.at(i).first;
    }
    std::cout << res << std::endl;
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