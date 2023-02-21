#include <bits/stdc++.h>

int max(int x, int y)
{
    if (x > y)
        return x;
    return y;
}

int min(int x, int y)
{
    if (x > y)
        return y;
    return x;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int anna, bob, claudio;
        scanf("%d %d %d", &anna, &bob, &claudio);
        int warrior = max(bob, claudio) - min(bob, claudio);

        if (anna > warrior)
            printf("YES\n");
        else
            printf("NO\n");

        t--;
    }

    return 0;
}