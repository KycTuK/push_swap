# ifndef PUSH_SWAP_PRINT_NODE_H
# define PUSH_SWAP_PRINT_NODE_H

/*
print_node.c
*/
void printNode(t_stack *node, int node_num);
void printTop(t_stack *node);
void printStack(t_stack *node);
void printStackRev(t_stack *node);
void ShowStack(void (*fprint)(t_stack*), t_stack *top);

# endif