
int	count_words(char const	*s,char c)
{
	int	i;
	int	cword;
	int	flag;

	cword = 0;
	flag = 0;
	i = 0;
	while (s[i])
	{
		if (s[i] != c)
		{
			i++;
			flag = 0;
		}
		else if (s[i] == c && flag == 0)
		{
			cword++;
			flag = 1;
		}
		else
			i++;
	}
	cword++;
	return (cword);
}

char	*wordfill(const char	*s, int start, int finish)
{
	char	*word;
	int	i;

	i = 0;
	word = malloc((finish - start + 1) * sizeof(char));
	if (!word)
		return (NULL);
	while (start < finish)
	{
		word[i] = s[start];
		i++;
		start++;
	}
	word[i] = 0;
	return (word);
}

char	**ft_split(char const *s, char c)
{
	int	i;
	int	j;
	int	tmp;
	char	**split;
	
	i = 0;
	j = 0;
	split = malloc((count_words(s,c) + 1) * sizeof(char *));
	if (!s ||!split)
		return (NULL);
	tmp = -1;
	while (i <= ft_strlen(s))
	{
		if (s[i] != c && tmp < 0)
			tmp = i;
		else if ((s[i] == c || i == ft_strlen(s)) && tmp >= 0)
		{
			split[j++] = wordfill(s, tmp, i);
			tmp = -1;
		}
		i++;
	}
	split[j] = 0;
	return (split);
}
