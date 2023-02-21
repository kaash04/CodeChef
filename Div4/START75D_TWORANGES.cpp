#include <stdio.h>

int max(int a, int b)
{
    if (a >= b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int min(int a, int b)
{
    if (a >= b)
    {
        return b;
    }
    else
    {
        return a;
    }
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int a, b, c, d;
        bool intersecting = false;
        scanf("%d %d %d %d", &a, &b, &c, &d);
        int length;
        if ((a <= c && c <= b) || (a <= d && d <= b) || (c <= a && a <= d))
        {
            intersecting = true;
        }
        if (intersecting == false)
        {
            length = (b - a + 1) + (d - c + 1);
        }
        else
        {
            length = max(max(a, b), max(c, d)) - min(min(a, b), min(c, d)) + 1;
        }

        printf("%d\n", length);

        t--;
    }

    return 0;
}