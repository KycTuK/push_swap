# include "push_swap.h"

int main()
{
    t_stack *a;
    // printf("%p\n",a);
    a = NULL;
    // push(&a, 10);
    // push(&a, 11);
    // push(&a, 12);
    // pop(&a);
    // push(&a, 13);
    // pushBack(a, 9);
    // popBack(&a);
    // pushBack(a, 8);
    // insert(a, 1, 5);
    // printStack(a);
    // printStackRev(a);
    // printStackRev(a);

    // printf("%p", getLastNode(a));
    // pushBack(&a, 10);
    pushNrand(pushBack, &a, 10);
    printStack(a);

    // printf("%d\n",irand(10));
    // printNode(a);
    // printNode(getNthNode(a, 2));
    // printNode(getLast(a));
    // printNode(getLastButOne(a));
    return 0;
}