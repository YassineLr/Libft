/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 15:55:47 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 23:44:24 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *s1, const char *s2, size_t len)
{
	size_t	i;
	size_t	l;

	i = 0;
	l = ft_strlen(s2);
	if (len > 0)
	{
		while (s2[i] != '\0' && i < len - 1)
		{
			s1[i] = s2[i];
			i++;
		}
		s1[i] = '\0';
	}
	return (l);
}

#include <stdio.h>
#include <string.h>
#include <unistd.h>
#include <ctype.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	char	str0[13] = "Hello world!";
	char	str1[13] = "Hello world!";
	size_t	ret_str0;
	size_t	ret_str1;
/******************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\tTESTING YOUR STRLCPY FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
/******************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_str0 = strlcpy(str0, (str0 + 6), 0);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 0);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_str0 = strlcpy(str0, (str0 + 6), 5);
	ret_str1 = ft_strlcpy(str1, (str1 + 6), 5);
	if (!strcmp(str0, str1) && ret_str0 == ret_str1)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}