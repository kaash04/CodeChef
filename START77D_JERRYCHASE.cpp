#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int jerry, tom;
        scanf("%d %d", &jerry, &tom);
        if (tom > jerry)
            printf("YES\n");
        else
            printf("NO\n");

        t--;
    }

    return 0;
}