/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ylarhris <ylarhris@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/05 16:36:45 by ylarhris          #+#    #+#             */
/*   Updated: 2022/10/09 23:10:33 by ylarhris         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*t__t;

	t__t = malloc(count * size);
	if (!t__t)
		return (0);
	ft_bzero(t__t, count * size);
	return (t__t);
}
#include <ctype.h>
#include <sys/time.h>
# define RED        "\033[31m"
# define GREEN        "\033[32m"
# define DEFAULT    "\033[0m"
# define BLUE        "\033[0;34m"

int	main(int argc, char **argv)
{
	void	*ret_calloc;
	void	*ret_ft_calloc;
	(void)	argc;
	(void)	argv;

	printf("%s%s%s", GREEN, "------------------ TEST 1 -------------------\n", DEFAULT);
	ret_calloc = calloc(10, 4);
	ret_ft_calloc = ft_calloc(10, 4);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 4)))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_calloc);
	free(ret_ft_calloc);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", GREEN, "------------------ TEST 2 -------------------\n", DEFAULT);
	ret_calloc = calloc(10, 1);
	ret_ft_calloc = ft_calloc(10, 1);
	if (!ft_memcmp(ret_calloc, ret_ft_calloc, (10 * 1)))
		printf("%s%s%s", GREEN, "[OK]\n", DEFAULT);
	else
		printf("%s%s%s", RED, "[KO]\n", DEFAULT);
	free(ret_calloc);
	free(ret_ft_calloc);
	printf("%s%s%s", GREEN, "---------------------------------------------\n", DEFAULT);
	usleep(250000);
	printf("%s%s%s", BLUE, "------------------ FINISH -------------------\n", DEFAULT);
	return (EXIT_SUCCESS);
}