#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int alice, bob, charlie;
        scanf("%d %d %d", &alice, &bob, &charlie);
        if (alice + bob + charlie > 5)
        {
            // yes
            printf("YES\n");
        }
        else
        {
            // no
            printf("NO\n");
        }

        t--;
    }

    return 0;
}