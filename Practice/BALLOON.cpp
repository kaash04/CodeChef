#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int n;
    scanf("%d", &n);
    int count = 0, arr[n];

    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++)
    {
        if (1 <= arr[i] && arr[i] <= 7)
            count++;

        if (count == 7)
        {
            printf("%d\n", i + 1);
            return;
        }
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