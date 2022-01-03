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
void pushBack(t_stack **head, int num);
void insert(t_stack *head, unsigned n, int num);
void pushNrand(void (*fpush)(t_stack **head, int num), t_stack **head, int times);

// pop_node.c
void pop(t_stack **head);
void popBack(t_stack **head);
void popList(t_stack **head);
void popNtimes(void (*fpop)(t_stack **head), t_stack **head, int times);

// get_node.c
t_stack* getNthNode(t_stack* node, int n);
t_stack* getLast(t_stack* node);
t_stack* getPenult(t_stack* node);
size_t  getSize(t_stack* head);

// get_mem.c
void	*ft_calloc(size_t size);

// print_node.c
void printNode(t_stack *node, int node_num);
void printHead(t_stack *node);
void printStack(t_stack *node);
void printStackRev(t_stack *node);
void ShowStack(void (*fprint)(t_stack *head), t_stack *head);

// swap.c
void atob(t_stack **a, t_stack **b);
void swapTwo(t_stack **head);
void swapLastTwo(t_stack **head);

// utils.c
int irand(int max);
int doesNodeExist(t_stack** node);
size_t getStrLen(const char *str);
void symbRep(const char *str, int rep_cnt);

// sort.c
void quickSort(t_stack **a, t_stack **b);