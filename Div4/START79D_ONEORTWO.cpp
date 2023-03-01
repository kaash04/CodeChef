#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int pile1, pile2;
    scanf("%d %d", &pile1, &pile2);

    if (pile1 == pile2)
    {
        if (pile1 % 2 == 0)
        {
            printf("CHEFINA\n");
            return;
        }
        printf("CHEF\n");
        return;
    }
    else if (pile1 > pile2)
    {
        if (pile2 % 2 == 0 && pile1 == pile2 + 1)
        {
            printf("CHEFINA\n");
            return;
        }

        printf("CHEF\n");
    }
    else
    {
        if (pile2 % 2 == 0 && pile1 + 1 == pile2)
        {
            printf("CHEF\n");
            return;
        }
        printf("CHEFINA\n");
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