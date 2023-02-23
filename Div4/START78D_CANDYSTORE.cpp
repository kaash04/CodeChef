#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int goal, sold;
        scanf("%d %d", &goal, &sold);
        int extra = sold - goal;
        if (sold < goal)
            printf("%d\n", sold);
        else
            printf("%d\n", goal + (extra * 2));
    }

    return 0;
}