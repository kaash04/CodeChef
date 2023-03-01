#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int n;
    scanf("%d", &n);
    int arr[n];

    for (int i = 0, j = n / 2; i < n; i++, j--)
    {
        if (i < n / 2)
            arr[i] = j;
        else
            arr[i] = i + 1;
    }

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    printf("\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}