# include "push_swap.h"

static void freeNode(t_stack **node)
{
    if (node && *node)
    {
        free(*node);
        *node = NULL;
    }
}

void pop(t_stack **head)
{
    t_stack *prev;
    int num;
    if (!head || !*head)
        exit(-1);
    prev = (*head);
    num = prev->num;
    (*head) = (*head)->next;
    freeNode(&prev);
    // return num;
}

void popBack(t_stack **head)
{
    t_stack *lastbn;
    if (!head || !*head) // Получили NULL || Список пуст
        exit(-1);
    lastbn = getPenult(*head);
    if (!lastbn) // Если в списке один элемент
        freeNode(head);
    else
        freeNode(&lastbn->next);
}

int popNth(t_stack **head, unsigned n) {
    if (!n) 
        pop(head);
    else
    {
        t_stack *prev = getNthNode(*head, n-1);
        t_stack *curr = prev->next;
        int val = curr->num;
        prev->next = curr->next;
        freeNode(&curr);
        return val;
    }
}

void popList(t_stack **head)
{
    while ((*head)->next) 
    {
        pop(head);
        *head = (*head)->next;
    }
    freeNode(head);
}

void popNtimes(void (*fpop)(t_stack **head), t_stack **head, int times)
{
    if (times <= 0)
        return ;
    while (--times && head)
    {
        printNode(*head, 0);
        fpop(head);
    }
}