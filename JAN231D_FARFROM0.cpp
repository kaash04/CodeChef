#include <stdio.h>

#include <math.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        // 1 = alex   2=bob
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        int distAlex, distBob;
        distBob = (x1 * x1) + (y1 * y1);
        distAlex = (x2 * x2) + (y2 * y2);

        if (distAlex == distBob)
        {
            printf("EQUAL\n");
        }
        else if (distAlex > distBob)
        {
            printf("BOB\n");
        }
        else if (distAlex < distBob)
        {
            printf("ALEX\n");
        }

        t--;
    }

    return 0;
}