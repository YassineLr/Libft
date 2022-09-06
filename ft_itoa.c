int	taille(int n)
{
	int i;

	i = 1;
	if(n < 0)
	{
		n = n * (-1);
		i++;
	}
	while(n/10)
	{
		i++;
		n /= 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		s;

	s = taille(n);
	str = (char *)malloc(s+1);
	if (/* condition */)
	{
		/* code */
	}
	

}