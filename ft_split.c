/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:20:55 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/19 14:03:16 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wcount(char const *s, char c)
{
	int	count;
	int	ok;

	count = 0;
	ok = 1;
	while (*s)
	{
		if (*s == c)
			ok = 1;
		else if (ok)
		{
			count++;
			ok = 0;
		}
		s++;
	}
	return (count);
}

static void	insertword(char *s, char *a, int len)
{
	
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		len;
	int		i;

	if (!s)
		return (NULL);
	array = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!array)
		return (NULL);
	len = 0;
	while (*s)
	{
		if (*s == c)
		{
			len = 0;

		}
		else
		{

		}
		len++;
		s++;
	}
	return (array);
}

int	main()
{
	int	i = 0;
	/*char **a = ft_split("ei ze esatek jiji", ' ');
	while (a[i] != NULL)
		printf("%s", a[i]);*/
	printf("%d", ft_wcount("jiji   zemouzz jaja", ' '));
}