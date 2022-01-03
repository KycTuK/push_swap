# include "push_swap.h"

void quickSort(t_stack **a, t_stack **b)
{
    t_stack *head;
    t_stack *next;
    t_stack *pivot;

    if (!a || !*a)
        return;
    head = *a;
    pivot = head;
    while (head->next)
    {
        next = head->next;
        if (next->num > pivot->num)
        {
            push(b, next->num);
            head->next = next->next;
            pop(&next);
        }
        head = head->next;
    }
}