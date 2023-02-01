#include <stdio.h>

int roll()
{
    int x, y;
    //  x days     y tablets
    scanf("%d %d", &x, &y);
    x *= 3;
    if (y >= x)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    int test;
    scanf("%d", &test);
    int res[test];
    for (int i = 0; i < test; i++)
    {
        res[i] = roll();
    }
    for (int i = 0; i < test; i++)
    {
        if (res[i] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}