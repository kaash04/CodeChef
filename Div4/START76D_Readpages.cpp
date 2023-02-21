#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int pages, perDay, days;
        scanf("%d %d %d", &pages, &perDay, &days);
        if (perDay * days >= pages)
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