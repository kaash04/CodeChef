#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int earned, taxLimit;
        scanf("%d %d", &earned, &taxLimit);
        if (earned > taxLimit)
        {
            printf("%d\n", earned - taxLimit);
        }
        else
        {
            printf("0\n");
        }

        t--;
    }

    return 0;
}