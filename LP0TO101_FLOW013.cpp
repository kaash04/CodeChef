#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    scanf("%d", &t);
    while (t != 0)
    {
        int a, b, c;
        scanf("%d %d %d", &a, &b, &c);
        if (a + b + c == 180)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
        t--;
    }
    return 0;
}
