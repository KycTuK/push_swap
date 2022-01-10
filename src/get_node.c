# include "push_swap.h"

t_stack* getBack(t_stack* top)
{
    if (top)
        while (top->next)
            top = top->next;
    return top;
}

t_stack* getPenult(t_stack* top)
{
    if (top && top->next)
        while (top->next->next)
            top = top->next;
    return top;
}

t_stack* getNthNode(t_stack* top, size_t n)
{
    if (top)
        while (n && top->next)
        {
            top = top->next;
            n--;
        }
    if (n)
        return NULL;
    return top;
}

size_t getSize(t_stack* top)
{
    size_t stackSize;
    stackSize = 0;
    while (top)
    {
        top = top->next;
        stackSize++;
    }
    return stackSize;
}