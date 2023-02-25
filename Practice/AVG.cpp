#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int n, k, v;
    scanf("%d %d %d", &n, &k, &v);
    int arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    int removedVal = v * (n + k);

    for (int i = 0; i < n; i++)
        removedVal -= arr[i];

    if (removedVal % k == 0)
    {
        removedVal /= k;
        if (removedVal >= 1)
        {
            printf("%d\n", removedVal);
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