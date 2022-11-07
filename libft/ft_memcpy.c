void *memcpy(void *dest, const void *src, size_t n)
{
	int	i;
	char	*s;
	char	*d;

	i = 0;
	s = (char *) src;
	d = (char *) dest;
	while (n)
	{
		d[i] = s[i];
		i++;
		n--;
	}
	return (dest);
}
