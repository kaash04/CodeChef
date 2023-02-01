#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a < 0 || b < 0 || c < 0)
        {
            if (a > 0 || b > 0 || c > 0)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
        else
        {
            printf("NO\n");
        }

        t--;
    }

    return 0;
}