# include "push_swap.h"

static uint uirand(uint seed, uint max)
{
    int a = 16807;
    uint m = 0x7fffffff;
    static uint sseed;
    sseed = (sseed + 1) * seed * a % m;
    return sseed % max;
}

int irand(int max)
{
    return uirand(time(NULL), (uint)max);
}

int doesNodeExist(t_stack** node)
{
    if (node && *node)
        return 1;
    return 0;
}

size_t getStrLen(const char *str)
{
    int len;
    len = 0;
    if (str)
        while (*(str + len))
            len++;
    return len;
}

void symbRep(const char *str, int rep_cnt)
{
    if (rep_cnt > 0)
    {
        while (rep_cnt--)
            printf("%s", str);
        printf("\n");
    }
}