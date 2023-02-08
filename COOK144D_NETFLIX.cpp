#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int a, b, c, cost;
        scanf("%d %d %d %d", &a, &b, &c, &cost);
        if (a + b >= cost || b + c >= cost || a + c >= cost)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }

        t--;
    }

    return 0;
}