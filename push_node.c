# include "push_swap.h"

static t_stack* getNewNode(t_stack *head, int num)
{
    t_stack* node;
    node = ft_calloc(sizeof(t_stack));
    node->next = head;
    node->num = num;
    return (node);
}

void push(t_stack **head, int num)
{
    *head = getNewNode(*head, num);
}

void pushBack(t_stack **head, int num)
{
    t_stack *last = getLast(*head);
    if (last)
        last->next = getNewNode(NULL, num);
    else
        push(head, num);
}

void insert(t_stack *head, unsigned n, int num)
{
    unsigned i = 0;
    while (i++ < n && head->next)
        head = head->next;
    head->next = getNewNode(head->next, num);
}

void pushNrand(void (*fpush)(t_stack **head, int num), t_stack **head, int times)
{
    if (times <= 0)
        return ;
    while (times--)
        fpush(head, irand(__RAND_MAX__));
}