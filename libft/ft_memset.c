void	*memset( void *str, int c, size_t n)
{
	int i;
	char *s;

	i = 0;
	s = (char *) str;
	while (n)
	{
		s[i] = c;
		i++;	
		n--;
	}
	return (str);
}
