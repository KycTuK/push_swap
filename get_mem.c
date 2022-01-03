# include "push_swap.h"

static void	ft_bzero (void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		*(unsigned char *)(s + i) = 0;
		i++;
	}
}

void	*ft_calloc(size_t size)
{
    void *result;

	if (!size)
		exit(EXIT_FAILURE);

    result = malloc(size);
    if (!result)
        exit(EXIT_FAILURE);
	ft_bzero(result, size);
    return (result);
}