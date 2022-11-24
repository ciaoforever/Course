
int	cint(int a)
{
	int	i;
	
	i = 0;
	if (a < 0)
	{
		i++;
		a = -a;
	}
	while (a > 0)
	{
		a = a / 10;
		i++;
	}
	return (i);
}

int	ft_sign(int a)
{
	int sign;
	if (a >= 0)
		return(0);
	else
		return(1);
}

char	*ft_itoa(int a)
{
	int	i;
	char	*s;
	int	sign;

	if (a == -2147483648)
		return ("-2147483648");
	i = cint(a);
	sign = ft_sign(a);
	if (a < 0)
		a = -a;
	s = malloc((i + 1) * sizeof(char));
	s[i] = '\0';
	while (i-- > 0)
	{	
		if (sign == 1 && i == 0)
		{
			s[0] = '-';
			return (s);
		}
		s[i] = a % 10 + 48;
		a = a / 10;
	}
	return (s);
}
