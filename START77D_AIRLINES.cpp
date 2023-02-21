#include <bits/stdc++.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t!=0)
    {   
        int cap, ppl, cost;
        scanf("%d %d %d", &cap, &ppl, &cost);
        cap *= 10;

        if (ppl > cap)
            printf("%d\n", cap*cost);
        else
            printf("%d\n", ppl*cost);
        
        t--;
    }

    return 0;
}