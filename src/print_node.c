# include "push_swap.h"

void printNode(t_stack *node, int node_num)
{
    printf("|&|%p|\t", &node);
    if (node)
    {
        printf("|p|%p|\t", node);
        printf("|*|%p|\t", node->next);
        printf("|*|%d|\t", node->num);
        printf("|N|%d|\t", node_num);
        printf("\n");
    }
}

void printTop(t_stack *node)
{
    printNode(node, 0);
}

void printStack(t_stack *node)
{
    int node_counter = 0;
    while (node)
    {
        printNode(node, node_counter++);
        node = node->next;
    }
}

void printStackRev(t_stack *node)
{
    static int node_counter = 0;
    if (node && node->next)
        printStackRev(node->next);
    printNode(node, node_counter++);
    if (!node)
        node_counter = 0;
}

void ShowStack(void (*fprint)(t_stack*), t_stack *top)
{
    symbRep("___", 20);
    fprint(top);
    printf("\n");
}