#include <bits/stdc++.h>

#define ll long long

int spf(int a)
{
    for (int i = 3; i <= sqrt(a); i += 2)
    {
        if (a % i == 0)
        {
            return i;
        }
    }
    return a;
}

void solution()
{
    int initial, required;
    scanf("%d %d", &initial, &required);
    int time = 0, score = initial;
    if (score % 2 == 0)
    {
    // initial even
    j:
        if (required % 2 != 0)
            required++;

        time += (required - score) / 2;
        printf("%d\n", time);
        return;
    }
    while (score < required)
    {
        if (score % 2 == 0)
        {
            // score += 2;
            // time++;
            goto j;
        }
        else
        {
            int sp = spf(score);
            score += sp;
            time++;
        }
    }

    printf("%d\n", time);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}