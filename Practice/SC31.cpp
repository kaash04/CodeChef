#include <bits/stdc++.h>

#define ll long long

void solution()
{
    int n, count = 0;
    scanf("%d", &n);
    std::vector<std::string> players;
    for (int i = 0; i < n; i++)
    {
        std::string temp;
        std::cin >> temp;
        players.push_back(temp);
    }

    for (int j = 0; j < 10; j++)
    {
        int res = 0;

        for (int i = 0; i < n; i++)
        {
            // std::string temp = players.at(i);
            // if (temp.at(j) == '1')
            //     res = res ^ 1;
            if ((players.at(i))[j] == '1')
                res = res ^ 1;
            
        }

        if (res == 1)
            count++;
    }
    printf("%d\n", count);
}
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
        solution();

    return 0;
}