#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int sizee, finalOr;
    scanf("%d %d", &sizee, &finalOr);
    int arr[sizee];

    for (int i = 0; i < sizee; i++)
        scanf("%d", &arr[i]);

    int orResult = arr[0];
    for (int i = 1; i < sizee; i++)
        orResult = orResult | arr[i];

    for (int i = 0; i <= finalOr; i++)
    {
        if ((orResult | i) == finalOr)
        {
            printf("%d\n", i);
            return;
        }
    }
    printf("-1\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}