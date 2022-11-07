void	ft_bzero(void *str, size_t n)
{
	int	i;

	i = 0;
	s = (char *) str;
	while(n)
	{
		s[i] = 0;
		i++;
		n--;
	}
}
