# ifndef PUSH_SWAP_PUSH_NODE_H
# define PUSH_SWAP_PUSH_NODE_H

/*
push_node.c
*/
t_stack* getNewNode(int num);
void push(t_stack **top, int num);
void pushBack(t_stack **top, int num);
void pushNth(t_stack **top, size_t nth, int num);
void pushNrand(void (*fpush)(t_stack**, int), t_stack **top, size_t times);

# endif