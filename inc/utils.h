# ifndef PUSH_SWAP_UTILS_H
# define PUSH_SWAP_UTILS_H

/*
sort.c
*/
void    quickSort(t_stack **a, t_stack **b);

/*
utils_mem.c
*/
void    *ft_calloc(size_t size);

/*
utils_check.c
*/
// void    throwException(t_errmsg msg_id, t_errlvl lvl_id);
// void    checkNodeExistance(t_stack **node);

/*
utils.c
*/
int     irand(size_t max);
void    symbRep(const char *str, int rep_cnt);
size_t  getStrLen(const char *str);
size_t  getArraySize(const char **arr);

# endif