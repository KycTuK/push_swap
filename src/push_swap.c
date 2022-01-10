# include "push_swap.h"

void pushTest1(t_stack **ptop)
{
    push(ptop, 10);
    push(ptop, 11);
    push(ptop, 12);
    pushBack(ptop, 8);
    pushBack(ptop, 9);
    ShowStack(printStack, *ptop);
    pushNrand(push, ptop, 1);
    pushNrand(pushBack, ptop, 2);
    pushNth(ptop, 9, 5);
    ShowStack(printStack, *ptop);
}

void popTest1(t_stack **ptop)
{
    pop(ptop);
    popBack(ptop);
    popNth(ptop, 2);
    popNtimes(pop, ptop, 2);
    ShowStack(printStack, *ptop);
}

void popTest2(t_stack *top)
{
    t_stack **ptop = &top;
    ShowStack(printStack, top);
    pop(ptop);
    ShowStack(printStack, top);
    popBack(ptop);
    ShowStack(printStack, top);
}

void printTest1(t_stack **ptop)
{
    t_stack *top = *ptop;
    printStack(top);
    printStackRev(top);
    printTop(getBack(top));
    printNode(top, 2);
    printTop(getNthNode(top, 2));
    printTop(getPenult(top));
    printf("last = %p\n", getBack(top));
    printf("size = %d\n", getSize(top));
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

void utilsTest1(t_stack *top)
{
    t_stack **ptop = &top;
    
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

void makeTest(const char *name, void (*ftest)(t_stack**), t_stack **top)
{
    printf("%s\n", name);
    symbRep("___", 10);
    ftest(top);
}

int main()
{
    t_stack *a;
    t_stack *b;
    printf("%p\n", a);
    // write(1, a, 10);
    // printf("%s\n", *a);
    
    // printf("%p\n", b);
    a = NULL;
    b = NULL;
    // printf("%p\n", a);
    // printf("%p\n", b);

    makeTest("pushTest1", pushTest1, &a);
    makeTest("popTest1", popTest1, &a);
    // makeTest("printTest1 : a", printStack, a);

    
    // makeTest("popTest2", popTest2, a);

    return 0;
}