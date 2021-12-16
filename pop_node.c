# include "push_swap.h"

static void freeNode(t_stack **node)
{
    if (node && *node)
    {
        free(*node);
        *node = NULL;
    }
}

int pop(t_stack **head)
{
    t_stack *prev;
    int num;
    if (!head)
        exit(-1);
    prev = (*head);
    num = prev->num;
    (*head) = (*head)->next;
    // free(prev);
    freeNode(prev);
    return num;
}

void popBack(t_stack **head)
{
    t_stack *lastbn;
    if (!head || !*head) // Получили NULL || Список пуст
        exit(-1);
    lastbn = getLastButOne(*head);
    if (!lastbn) // Если в списке один элемент
        freeNode(head);
    else
        freeNode(&lastbn->next);
}

int popNth(t_stack **head, unsigned n) {
    if (!n) 
        return pop(head);
    else
    {
        t_stack *prev = getNth(*head, n-1);
        t_stack *elm  = prev->next;
        int val = elm->num;
        prev->next = elm->next;
        free(elm);
        return val;
    }
}