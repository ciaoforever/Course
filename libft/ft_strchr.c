char *ft_strchr(const char *src, int a)
{
	int i;
	
	i = 0;
	if (a == '\0')
		return (&src[ft_strlen(src)]);
	while (src[i])
	{
		if (src[i] == a)
			return (&src[i]);
		i++;
	}
	return (NULL);
}
