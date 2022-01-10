# ifndef PUSH_SWAP_POP_NODE_H
# define PUSH_SWAP_POP_NODE_H
/*
get_node.c
*/
void pop(t_stack **top);
void popBack(t_stack **top);
void popNth(t_stack **top, size_t n);
void popList(t_stack **top);
void popNtimes(void (*fpop)(t_stack**), t_stack **top, size_t times);

# endif