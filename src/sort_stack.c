# include "push_swap.h"

void quickSort(t_stack **a, t_stack **b)
{
    t_stack *top;
    t_stack *next;
    t_stack *pivot;

    if (!a || !*a)
        return;
    top = *a;
    pivot = top;
    while (top->next)
    {
        next = top->next;
        if (next->num > pivot->num)
        {
            push(b, next->num);
            top->next = next->next;
            pop(&next);
        }
        top = top->next;
    }
}