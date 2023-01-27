#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        char ch;
        scanf(" %c", &ch);
        if (ch == 'B' || ch == 'b')
        {
            printf("BattleShip\n");
        }
        else if (ch == 'c' || ch == 'C')
        {
            printf("Cruiser\n");
        }
        else if (ch == 'D' || ch == 'd')
        {
            printf("Destroyer\n");
        }
        else
        {
            printf("Frigate\n");
        }

        t--;
    }

    return 0;
}