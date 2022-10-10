/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/09 16:34:05 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 23:53:32 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	i = 0;
	while ((str1[i] != '\0' || str2[i] != '\0') && i < n)
	{
		if (str1[i] > str2[i])
		{
			return (1);
		}
		else if (str1[i] < str2[i])
		{
			return (-1);
		}
		i++;
	}
	return (0);
}
#include <ctype.h>
#include <sys/time.h>
#include <unistd.h>
#include <stdlib.h>

# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"
#include <stdio.h>
#include <ctype.h>
#include <string.h>
#include <unistd.h>

int	main(int argc, char **argv)
{
	(void)	argc;
	(void)	argv;
	int		ret_strncmp;
	int		ret_ft_strncmp;
	char	str0[] = {"THATS WHAT SHE SAID"};
	char	str1[] = {"THATS WHAT SHE SAID"};
	char	str2[] = {"1337 BENGUERIR"};
	char	str3[] = {"DONT STRNCMP WHAT CANT BE COMPARED."};

	/**************************************************************************/
	printf("%s%s%s", BLUE, "-----------------------------------------------\n", DEFAULT);
	printf("%s%s%s", BLUE, "\t TESTING YOUR STRCMP FUNCTION : \n", DEFAULT);
	printf("%s%s%s", BLUE, "-----------------------------------------------\n", DEFAULT);
	/**************************************************************************/
// TEST 1
	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str0, str1, 5);
	ret_ft_strncmp = ft_strncmp(str0, str1, 5);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 2
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str0, str1, 13);
	ret_ft_strncmp = ft_strncmp(str0, str1, 13);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 3
	printf("%s%s%s", GREEN, "------------------ TEST 3 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str2, str3, 0);
	ret_ft_strncmp = ft_strncmp(str2, str3, 0);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
	printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
// TEST 4
	printf("%s%s%s", GREEN, "------------------ TEST 4 -------------------\n", DEFAULT);
	ret_strncmp = strncmp(str2, str3, 100);
	ret_ft_strncmp = ft_strncmp(str2, str3, 100);
	if (ret_strncmp == ret_ft_strncmp)
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------ FINISH --------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}