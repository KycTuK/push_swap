# include "push_swap.h"

static size_t uirand(size_t seed, size_t max)
{
    int a = 16807;
    size_t m = 0x7fffffff;
    static size_t sseed;
    sseed = (sseed + 1) * seed * a % m;
    return sseed % max;
}

int irand(size_t max)
{
    return uirand(time(0), (size_t)max);
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

size_t getStrLen(const char *str)
{
    int len;
    len = 0;
    if (str)
        while (*(str + len))
            len++;
    return len;
}

size_t getArraySize(const char **arr)
{
    size_t arrSize;
    arrSize = 0;
    if (arr)
        while (*arr++)
            arrSize++;
    return arrSize;
}