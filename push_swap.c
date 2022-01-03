# include "push_swap.h"

void pushTest1(t_stack *head)
{
    t_stack **phead = &head;
    push(phead, 10);
    push(phead, 11);
    push(phead, 12);
    pushBack(phead, 8);
    pushBack(phead, 9);
    pushNrand(push, phead, 2);
    pushNrand(pushBack, phead, 3);
    insert(head, 1, 5);
    ShowStack(printStack, head);
}

void popTest1(t_stack *head)
{
    t_stack **phead = &head;
    ShowStack(printStack, head);
    pop(phead);
    ShowStack(printStack, head);
    popBack(phead);
    ShowStack(printStack, head);
}

void popTest2(t_stack *head)
{
    t_stack **phead = &head;
    ShowStack(printStack, head);
    pop(phead);
    ShowStack(printStack, head);
    popBack(phead);
    ShowStack(printStack, head);
}

void printTest1(t_stack *head)
{
    t_stack **phead = &head;
    printStack(head);
    printStackRev(head);
    printHead(getLast(head));
    printNode(head, 2);
    printHead(getNthNode(head, 2));
    printHead(getPenult(head));
    printf("last = %p\n", getLast(head));
    printf("size = %d\n", getSize(head));
}

void swapTest1(t_stack *ha, t_stack *hb)
{
    t_stack **pha = &ha;
    t_stack **phb = &hb;
    swapTwo(pha);
    atob(pha, phb);
    ShowStack(printStack, ha);
    ShowStack(printStack, hb);
}

void utilsTest1(t_stack *head)
{
    t_stack **phead = &head;
    
    printf("%d\n", irand(10));
    printf("%d\n", getStrLen(NULL));
}

void swapTest2(t_stack *ha, t_stack *hb)
{
    t_stack **pha = &ha;
    t_stack **phb = &hb;
    ShowStack(printStack, ha);
    ShowStack(printStack, hb);
    quickSort(pha, phb);
    ShowStack(printStack, ha);
    ShowStack(printStack, hb);
}

int main()
{
    t_stack *a;
    t_stack *b;
    printf("%p\n", a);
    printf("%p\n", b);
    a = NULL;
    b = NULL;
    printf("%p\n", a);
    printf("%p\n", b);

    pushTest1(a);
    printf("\n\n");
    popTest1(a);

    return 0;
}