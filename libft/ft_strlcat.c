size_t ft_strlcat(char *dst, char *src, size_t dstsize)
{
	size_t i;
	size_t j;

	i = ft_strlen(dst);
	if (dstsize <= i);
		return (dstsize + ft_strlen(src));
	j = 0;
	while (src[j] && i + 1 < dstsize)
	{
		dst[i] = src[j];
		i++;
		j++;
	}
	dst[i] = '\0';
	return (ft_strlen(dst) + ft_strlen(&src[j]));
}
