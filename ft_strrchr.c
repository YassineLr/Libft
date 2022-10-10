/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/07 20:44:02 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 23:59:31 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_check(const char *str, int ch, int i)
{
	char	c;

	c = (char)ch;
	while (str[i])
	{
		if (str[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strrchr(const char *str, int ch)
{
	char	c;
	int		i;

	i = 0;
	c = (char)ch;
	if(ch == '\0')
		return((char *)str + ft_strlen(str));
	while (str[i])
	{
		if (str[i] == c)
		{
			if (ft_check(str, c, i + 1) == 0)
				return ((char *)str + i);
		}
		i++;
	}
	return (NULL);
}

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"

int	main(int argc, char *argv[])
{
	(void)	argc;
	(void)	argv;
	char	*ret_strrchr;
	char	*ret_ft_strrchr;
	int		index;
	char	my_test_list[10] = { 'a', 'A', '9', 'z', '%', '\n', '\0', '0', 'Z', '\r'};
	char	str[13] = {"Hello world!"};

/******************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR STRRCHR FUNCTION :\n", DEFAULT);
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
/******************************************************************************/
	index = 0;
	printf("%s%s%s", GREEN, "-------------------- TESTS ------------------\n", DEFAULT);
	while (index < 10)
	{
		ret_strrchr = strrchr(str, my_test_list[index]);
		ret_ft_strrchr = ft_strrchr(str, my_test_list[index]);
		if (ret_strrchr == ret_ft_strrchr)
			printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
		else
			printf("%s%s%s", RED, "[KO]\n", DEFAULT);
		++index;
	}
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------- FINISH ------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}