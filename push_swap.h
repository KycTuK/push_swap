# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

typedef struct  s_stack
{
    int             num;
    struct s_stack  *next;
}               t_stack;

// push_node.c
void push(t_stack **head, int num);
void pushBack(t_stack *head, int num);
void insert(t_stack *head, unsigned n, int num);

// pop_node.c
int pop(t_stack **head);
void popBack(t_stack **head);
void popList(t_stack **head);

// get_node.c
t_stack* getNthNode(t_stack* node, int n);
t_stack* getLastNode(t_stack* node);
t_stack* getPenult(t_stack* node);
int doesNodeExist(t_stack** node);

// print_node.c
void printNode(t_stack *node, int node_num);
void printStack(t_stack *node);
void printStackRev(t_stack *node);

