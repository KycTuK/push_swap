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