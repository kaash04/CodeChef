#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int sellingPrice, profit;
        scanf("%d %d", &sellingPrice, &profit);
        int cost = sellingPrice - profit;
        int newSellingPrice = sellingPrice + (0.1 * sellingPrice);
        profit = newSellingPrice - cost;
        printf("%d\n", profit);

        t--;
    }

    return 0;
}