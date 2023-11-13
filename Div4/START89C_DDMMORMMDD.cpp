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
    std::string s, a, b;
    std::cin >> s;
    a.push_back(s[0]);
    a.push_back(s[1]);
    b.push_back(s[3]);
    b.push_back(s[4]);
    ll n1 = std::stoi(a), n2 = std::stoi(b);

    if (n1 < 13 && n2 < 13)
        printf("BOTH");
    else if (n2 > 12)
        printf("MM/DD/YYYY");
    else
        printf("DD/MM/YYYY");
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