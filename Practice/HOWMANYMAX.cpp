#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int sizee;
    scanf("%d", &sizee);
    int arr[sizee], count = 1;
    char binary[sizee - 1];

    scanf("%s", binary);

    for (int i = 0; i < sizee - 1; i++)
    {
        if (binary[i] == '1' && binary[i + 1] == '0')
            count++;
    }
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