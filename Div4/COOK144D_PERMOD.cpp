#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int len;
        scanf("%d", &len);
        int arr[len];
        for (int i = 0; i < len; i++)
        {
            arr[i] = i + 2;
        }
        arr[len - 1] = 1;

        for (int i = 0; i < len; i++)
        {
            printf("%d ", arr[i]);
        }
        printf("\n");

        t--;
    }

    return 0;
}