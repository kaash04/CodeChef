#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int total, passed;
        scanf("%d %d", &total, &passed);
        int marks[total];

        for (int i = 0; i < total; i++)
            scanf("%d", &marks[i]);

        int n = sizeof(marks) / sizeof(marks[0]);
        std::sort(marks, marks + n);

        int indexOfLastPassed = total - passed;
        printf("%d\n", marks[indexOfLastPassed] - 1);
    }

    return 0;
}