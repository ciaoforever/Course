#include <libft.h>

char	*ft_substr(char const *s,unsigned int start,size_t len)
{
	char	*subs;
	size_t	i;
	
	i = 0;
	subs = (char *) malloc(sizeof(*s) *(len + 1));
	if (!subs)
		return (NULL);
	while (i < len)
	{
		subs[i] = s[start];
		i++;
		start++;
	}
	subs[i] = 0;
	return (subs);
}
