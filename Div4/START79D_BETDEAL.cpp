#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int cpA = 100, cpB = 200, disA, disB;
    scanf("%d %d", &disA, &disB);
    int spA = 100 - disA;
    int spB = 200 - (2 * disB);
    if (spA < spB)
        printf("FIRST\n");
    else if (spA > spB)
        printf("SECOND\n");
    else
        printf("BOTH\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}