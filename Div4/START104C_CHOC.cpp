#include <bits/stdc++.h>
using namespace std;

#define nl "\n"

#define fi(a, b, c) \
    for (ll a = b; a < c; a++)

#define fd(a, b, c) \
    for (ll a = b; a > c; a--)

typedef std::vector<long long> vll;
typedef long long ll;

template <class T>
void vin(vector<T> &a)
{
    T temp;
    fi(i, 0, a.size())
    {
        cin >> temp;
        a.at(i) = temp;
    }
}
template <class T1>
void vout(vector<T1> &a)
{
    fi(i, 0, a.size()) { cout << a.at(i) << " "; }
}
/* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ */
void jaadu()
{
    ll child, diff, ch = 0;
    cin >> child >> diff;
    ll distro[child];
    fi(i, 0, child)
    {
        ll temp;
        cin >> temp;
        ch += temp;
        distro[i] = temp;
    }
    if (ch < child)
    {
        cout << "NO\n";
        return;
    }
    if (diff == 0 && ch % child != 0)
    {
        cout << "NO\n";
        return;
    }
    cout << "YES\n";
}
/* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ */
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 0;
    cin >> t;
    while (t--)
        jaadu();
    return 0;
}