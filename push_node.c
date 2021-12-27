# include "push_swap.h"

static void *ft_malloc(size_t size)
{
    void *result;

    result = malloc(size);
    if (!result)
        exit(EXIT_FAILURE);
    return (result);
}

static t_stack* pushNewNode(t_stack* next_node, int num)
{
    t_stack* node;
    node = ft_malloc(sizeof(t_stack));
    node->num = num;
    node->next = next_node;
    return (node);
}

void push(t_stack **head, int num)
{
    *head = pushNewNode(*head, num);
}

void pushBack(t_stack **head, int num)
{
    t_stack *last = getLastNode(*head);
    if (last)
        last->next = pushNewNode(NULL, num);
    else
        push(head, num);
}

void insert(t_stack *head, unsigned n, int num)
{
    unsigned i = 0;
    while (i++ < n && head->next)
        head = head->next;
    head->next = pushNewNode(head->next, num);
}

void pushNrand(void (*fpush)(t_stack **head, int num), t_stack **head, int times)
{
    if (times <= 0)
        return ;
    while (times--)
        fpush(head, irand(__RAND_MAX__));
}