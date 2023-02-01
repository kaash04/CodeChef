#include <stdio.h>
#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int avail, cost;
        scanf("%d %d", &cost, &avail);
        printf("%d\n", avail / cost);

        t--;
    }

    return 0;
}