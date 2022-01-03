# include "push_swap.h"

void atob(t_stack **a, t_stack **b)
{
    ShowStack(printStack, *a);
    ShowStack(printStack, *b);
    printf("\n");
    push(b, (*a)->num);
    pop(a);
    ShowStack(printStack, *a);
    ShowStack(printStack, *b);
    printf("\n");
}

void swapTwo(t_stack **head)
{
    int tmp;

    if (!(*head)->next)
        return;
    tmp = (*head)->num;
    (*head)->num = (*head)->next->num;
    (*head)->next->num = tmp;    
}

void swapLastTwo(t_stack **head)
{
    int tmp;
    t_stack *penult;

    if (!(*head)->next)
        return;
    penult = getPenult(*head);
    tmp = penult->num;
    penult->num = penult->next->num;
    penult->next->num = tmp;
}