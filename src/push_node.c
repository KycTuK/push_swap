# include "push_swap.h"

static t_stack* getNode(t_stack *top, int num)
{
    t_stack* node;
    node = ft_calloc(sizeof(t_stack));
    node->next = top;
    node->num = num;
    return (node);
}

/*
returns new node with
node->num = num
node->next = NULL;
*/
t_stack* getNewNode(int num)
{
    return (getNode(NULL, num));
}

/*
origin top pointer is growing up by one element
*/
void push(t_stack **top, int num)
{
    *top = getNode(*top, num);
}

void pushBack(t_stack **top, int num)
{
    t_stack *last;
    last = getBack(*top);
    if (last)
        last->next = getNewNode(num);
    else
        push(top, num);
}

void pushNth(t_stack **top, size_t nth, int num)
{
    t_stack *prenth;
    if (!top)
        return;
    if (!nth || !(*top))
        push(top, num);
    prenth = *top;
    while (--nth && prenth ->next)
        prenth = prenth->next;
    if (!nth)
        prenth->next = getNode(prenth->next, num);
}

void pushNrand(void (*fpush)(t_stack**, int), t_stack **top, size_t times)
{
    if (!times)
        return;
    while (times--)
        fpush(top, irand(__RAND_MAX__));
}