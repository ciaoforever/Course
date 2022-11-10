char *ft_strrchr(char *str, int a)
{
	int i;

	i = ft_strlen(str);
	while (i--)
		if(str[i] == a)
			return (&src[i]);
	return (NULL);
}
