#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int len, result;
    scanf("%d %d", &len, &result);
    std::string s;

    int max = len + 1, min = 1 - len;
    if (min > result || result > max)
    {
        printf("-1\n");
        return;
    }

    if (result <= 0)
    {
        int minus = abs(result) + 1;
        for (int i = 0; i < len; i++)
        {
            if (i < minus)
                s.push_back('-');
            else
                s.push_back('*');
        }
    }
    else
    {
        int plus = abs(result) - 1;
        for (int i = 0; i < len; i++)
        {
            if (i < plus)
                s.push_back('+');
            else
                s.push_back('*');
        }
    }

    // printing string
    for (int i = 0; i < s.size(); i++)
    {
        printf("%c", s.at(i));
    }
    printf("\n");
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}