#include <stdio.h>
#include <iostream>
#include <string>

int checkZero(int len, std::string str)
{
    int count = 0;
    for (int i = 0; i < len; i++)
    {
        if (str.at(i) == '0')
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int len, operations;
        std::string bin;
        std::cin >> len >> bin;
        int zeros = checkZero(len, bin);
        int ones = len - zeros;
        if (ones > zeros)
        {
            // zero gayab and flip
            operations = zeros + 1;
        }
        else
        {
            // ones gayab
            operations = ones;
        }

        printf("%d\n", operations);

        t--;
    }

    return 0;
}