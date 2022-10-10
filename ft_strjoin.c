/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 12:46:49 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 23:41:12 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	i;
	size_t	j;
	char	*ch;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (0);
	ch = (char *) malloc(sizeof(ft_strlen(s1) + ft_strlen(s2) + 1));
	while (s1[i])
	{
		ch[i] = s1[i];
		i++;
	}
	while (s2[j])
	{
		ch[i + j] = s2[j];
		j++;
	}
	ch[i + j] = '\0';
	return (ch);
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
	char	*ret_ft_strjoin;
	(void)	argc;
	(void)	argv;

/******************************************************************************/
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "       TESTING YOUR STRJOIN FUCNTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "---------------------------------------------\n", DEFAULT);
/******************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "----------------- TEST 1 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("Hello", " world!");
	if (!strcmp("Hello world!", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "----------------- TEST 2 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("", "world!");
	if (!strcmp("world!", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "----------------- TEST 3 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("Hello", " ");
	if (!strcmp("Hello ", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s","RED", "[KO]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 4
	printf("%s%s%s", GREEN, "----------------- TEST 4 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("", "");
	if (!strcmp("", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[OK]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 5
	printf("%s%s%s", GREEN, "----------------- TEST 5 --------------------\n", DEFAULT);
	ret_ft_strjoin = ft_strjoin("", " ");
	if (!strcmp(" ", ret_ft_strjoin))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[OK]\n", DEFAULT);
	free(ret_ft_strjoin);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "----------------- FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}
