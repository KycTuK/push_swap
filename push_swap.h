# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>

# include <time.h>
# include <math.h>

# define uint unsigned int
# define ulint unsigned long int

# define __RAND_MAX__ 100

typedef struct  s_stack
{
    int             num;
    struct s_stack  *next;
}               t_stack;

// push_node.c
void push(t_stack **head, int num);
void pushBack(t_stack *head, int num);
void insert(t_stack *head, unsigned n, int num);
void pushNrand(void (*fpush)(t_stack **head, int num), t_stack **head, int times);

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

// utils.c
int irand(int max);