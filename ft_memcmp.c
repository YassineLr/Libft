#include "libft.h"

int		ft_memcmp(const void *s1, const void *s2, size_t n)
{
	int		i;
	unsigned char	t__t1;
	unsigned char	t__t2;

	i = 0;
	t__t1 = (unsigned char *)s1;
	t__t2 = (unsigned char *)s2;
	while (t__t1 && t__t2 && t__t1[i] == t__t2[i])
		i++;
	return(t__t1[i]-t__t2[i]);
}

int main()
{
	const char *s1[]="yassine";
	const char	*s2[]="yassine";
	printf("%d",ft_memcmp(s1,s2,strlen(s1)));
}