#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n+1] = {0};

    for (int i = 1; i < n+1; i++)
    {
        int temp;
        scanf("%d", &temp);
        if (temp == i)
            arr[i] = -n;
        else
            arr[temp]++;
    }
    int count = 0;

    for (int i = 1; i < n+1; i++)
        if (arr[i] >= k)
            count++;

    printf("%d\n", count);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}