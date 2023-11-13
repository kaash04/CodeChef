#include <bits/stdc++.h>
using namespace std;

#define ln "\n"
#define dbg(x) cout << #x << " = " << x << ln
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
    ll n;
    cin >> n;
    string s;
    cin >> s;
    ll len = s.length();
    // Alice = even
    ll turn = 0;
    deque<char> q;
    for (int f = 0, e = len - 1; f <= e; turn++)
    {
        if (turn & 1)
        {
            // Bob
            if (s[e] == '1')
                q.push_front(s[e--]);
            else
                q.push_back(s[e--]);
        }
        else
        {
            // ALice
            if (s[f] == '0')
                q.push_front(s[f++]);
            else
                q.push_back(s[f++]);
        }
    }
    for (char c : q)
        cout << c;
    cout << ln;
}
/* -+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ */
int main()
{
#ifndef ONLINE_JUDGE
    clock_t tStart = clock();
    freopen("inp.txt", "r", stdin);
    freopen("out.txt", "w", stdout);
#endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    ll t = 1;
    cin >> t;
    while (t--)
        jaadu();
#ifndef ONLINE_JUDGE
    cout << "Executed in: " << setprecision(4) << fixed << (double)(clock() - tStart) / CLOCKS_PER_SEC << "s";
#endif
    return 0;
}