#include "ft_isalpha.c"
#include "ft_isdigit.c"

int	ft_isalnum(int c)
{
	return (ft_isalpha(c) || ft_isdigit(c));
}
