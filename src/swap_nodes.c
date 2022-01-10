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

void swapTwo(t_stack **top)
{
    int tmp;

    if (!(*top)->next)
        return;
    tmp = (*top)->num;
    (*top)->num = (*top)->next->num;
    (*top)->next->num = tmp;    
}

void swapLastTwo(t_stack **top)
{
    int tmp;
    t_stack *penult;

    if (!(*top)->next)
        return;
    penult = getPenult(*top);
    tmp = penult->num;
    penult->num = penult->next->num;
    penult->next->num = tmp;
}