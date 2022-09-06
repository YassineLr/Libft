int		ft_toupper(int ch)
{
	if(ch <= 'Z' && ch >= 'A')
		return (ch+32);
	return (ch);
}