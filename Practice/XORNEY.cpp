#include <bits/stdc++.h>

#define ll long long

void solution()
{
    ll l, r;
    scanf("%lld %lld", &l, &r);
    int elements = r - l + 1;
    if (l == r)
    {
        if (l & 1)
        {
            printf("Odd\n");
            return;
        }
        else
        {
            printf("Even\n");
            return;
        }
    }

    bool bl = false, rl = false;
    if (l % 2 == 0)
        bl = true;
    if (r % 2 == 0)
        rl = true;

    int mid = (r - l) / 2;
    if (!bl && !rl)
    {
        // l, r odd
        if (mid & 1)
            printf("Even\n");
        else
            printf("Odd\n");
    }
    else if (bl && rl)
    {
        // l, r even
        if (mid & 1)
            printf("Odd\n");
        else
            printf("Even\n");
    }
    else
    {
        // ek even ek odd
        if (elements % 4 == 0)
            printf("Even\n");
        else
            printf("Odd\n");
    }
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}