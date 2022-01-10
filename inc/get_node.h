# ifndef PUSH_SWAP_GET_NODE_H
# define PUSH_SWAP_GET_NODE_H
/*
get_node.c
*/
t_stack* getBack(t_stack* top);
t_stack* getPenult(t_stack* top);
t_stack* getNthNode(t_stack* top, size_t n);
size_t  getSize(t_stack* top);

# endif