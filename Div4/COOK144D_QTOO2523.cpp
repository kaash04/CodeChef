#include <stdio.h>
#include <string>
#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int n;
        scanf("%d", &n);
        // char arr[n];
        std::string ar;
        std::cin >> ar;
        // scanf("%s", ar);
        int res = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                if (i != j && ar[i] == ar[j])
                {
                    res += 1;
                }
            }
        }

        if (res > 0)
        {
            printf("%d\n", n - 2);
        }
        else
        {
            printf("-1\n");
        }
        // printf("C E : %d", res);

        t--;
    }

    return 0;
}