#include "libft.h"

void	*bb_realloc(void *ptr, unsigned int size)
{
	void	*new;

	new = malloc(size);
	ft_memcpy(new, ptr, size / 2);
	free(ptr);
	return (new);
}
