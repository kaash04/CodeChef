#include <stdio.h>

int roll()
{
    int inp, rem;
    scanf("%d", &inp);
    for (; inp!=0; )
    {
        rem = inp%10;
        if (rem==7)
        {
            return 1;
        }
        inp /= 10;
        
    }
    return 0;
    
}

int main()
{
    int test;
    scanf("%d", &test);
    int res[test];
    for (int i = 0; i < test; i++)
    {
        res[i] = roll();
    }
    for (int i = 0; i < test; i++)
    {
        if (res[i] == 1)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}