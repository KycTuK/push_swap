# include "push_swap.h"

static void freeNode(t_stack **node)
{
    if (node && *node)
    {
        free(*node);
        *node = NULL;
    }
}

void pop(t_stack **top)
{
    t_stack *popped;
    if (!top || !(*top))
        return ;
    else
    {
        popped = *top;
        (*top) = (*top)->next;
        freeNode(&popped);
        return ;
    }
}

void popBack(t_stack **top)
{
    t_stack *penult;
    if (!top || !(*top))
        return ;
    else
    {
        penult = getPenult(*top);
        if (penult->next)
            freeNode(&penult->next);
        else
            freeNode(&penult);
        return ;
    }
}

void popNth(t_stack **top, size_t n)
{
    t_stack *popped;
    t_stack *prev;
    
    if (!top || !(*top))
        return ;
    else if (!n) 
        pop(top);
    else
    {
        prev = getNthNode(*top, n-1);
        if (!prev || !prev->next)
            return ;
        popped = prev->next;
        prev->next = popped->next;
        freeNode(&popped);
        return ;
    }
}

void popList(t_stack **top)
{
    if (!top)
        return ;
    while (*top)
        pop(top);
}

void popNtimes(void (*fpop)(t_stack**), t_stack **top, size_t times)
{
    if (!times)
        return;
    while (times-- && top)
    {
        printNode(*top, 0);
        fpop(top);
    }
}