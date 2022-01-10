# include "push_swap.h"

// extern const char *excpTextList[];
// extern const char *excpLvlList[];

const char *excpTextList[] = 
{
    "DoesNotExists",
};

const char *excpLvlList[] = 
{
    "NonCritical",
    "Critical"
};

void throwException(t_errmsg msg_id, t_errlvl lvl_id)
{
    printf("\n");
    if (lvl_id < getArraySize(excpLvlList))
        printf("%s", excpLvlList[lvl_id]);
    else
        printf("UnkonownType");
    printf("Exception: ");
    if (msg_id < getArraySize(excpTextList))
        printf("%s", excpTextList[msg_id]);
    else
        printf("UknownError");
    printf("\n");
    if (lvl_id = Critical)
        exit(EXIT_FAILURE);
}

void checkNodeExistance(t_stack **node)
{
    if (!node || !*node)
        throwException(DoesNotExists, Critical);
}