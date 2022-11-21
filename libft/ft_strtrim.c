#include <libft.h>

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	j;
	size_t	is;
	char	*s;

	i = 0;
	s = (char *) malloc(sizeof(s) * (ft_strlen(s1) + 1));
	if (!s)
		return (NULL);
	is = 0;
	while (s1[i])
	{
		j =0;
		while (set[j])
		{
			if (s1[0] != set[j])
				j++;
			else
				ft_strtrim(++s1, set);
		}
		s[is] = s1[i];
		is++;
		i++;
	}
	s[is] = 0;
	j = 0;
	is--;
	while (set[j])
	{
		if (s[is] != set[j])
		       j++;
		else
		{
			s[is--] = 0;
			j = 0;
		}	
	}
	return (s);
}
