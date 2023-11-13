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
    ll rounds, scores[2] = {0}; // 0=chef 1=chefina
    cin >> rounds;
    string chef, chefina;
    cin >> chef >> chefina;
    fi(i, 0, rounds)
    {
        if (chef[i] == 'R')
        {
            if (chefina[i] == 'S')
                scores[0]++;
            else if (chefina[i] == 'P')
                scores[1]++;
        }
        else if (chef[i] == 'P')
        {
            if (chefina[i] == 'R')
                scores[0]++;
            else if (chefina[i] == 'S')
                scores[1]++;
        }
        else
        {
            if (chefina[i] == 'R')
                scores[1]++;
            else if (chefina[i] == 'P')
                scores[0]++;
        }
    }
    // cout << "chef=" << scores[0] << " chefina=" << scores[1] << "\n";
    if (scores[0] > scores[1])
        cout << "0\n";
    else
        cout << ((scores[1] - scores[0]) / 2) + 1 << "\n";
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