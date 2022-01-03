# include "push_swap.h"

t_stack* getNthNode(t_stack* node, int n)
{
    int counter;
    counter = 0;
    while (counter++ < n && node && node->next) 
        node = node->next;
    if (counter <= n)
        return NULL;
    return node;
}

t_stack* getLast(t_stack* node)
{
    while (node && node->next)
        node = node->next;
    return node;
}

t_stack* getPenult(t_stack* node)
{
    if (!node || !node->next)
        return NULL;
    while (node->next->next)
        node = node->next;
    return node;
}

size_t getSize(t_stack* head)
{
    size_t stackSize;
    stackSize = 0;
    while (head)
    {
        head = head->next;
        stackSize++;
    }
    return stackSize;
}