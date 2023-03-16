#include <bits/stdc++.h>

#define nl printf("\n")
#define sl(a) scanf("%lld", &a)

#define fi(a, b, c) \
    for (ll a = b; a < c; i++)

#define fd(a, b, c) \
    for (ll a = b; a > c; i--)

typedef std::vector<long long> vll;
typedef long long ll;

/************************************************************************/
void jaadu()
{
    ll hills, up, down;
    scanf("%lld %lld %lld", &hills, &up, &down);
    ll heights[hills];
    fi(i, 0, hills)
        sl(heights[i]);

    bool parachute = true;
    fi(i, 0, hills)
    {
        if (i == hills - 1)
        {
            printf("%d\n", hills);
            return;
        }
        if (heights[i] > heights[i + 1])
        {
            // jump down
            if (heights[i] - heights[i + 1] > down && parachute == true)
            {
                parachute = false;
            }
            else if (heights[i] - heights[i + 1] > down && parachute == false)
            {
                printf("%d\n", i + 1);
                return;
            }
        }
        else if (heights[i] < heights[i + 1])
        {
            // jump up
            if (heights[i + 1] - heights[i] > up)
            {
                printf("%d\n", i + 1);
                return;
            }
        }
    }
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