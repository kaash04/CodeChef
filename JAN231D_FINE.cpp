#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int speed;
        scanf("%d", &speed);
        if (speed <= 70)
        {
            printf("0\n");
        }
        else if (speed <= 100)
        {
            printf("500\n");
        }
        else
        {
            printf("2000\n");
        }

        t--;
    }

    return 0;
}