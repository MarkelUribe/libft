/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:20:55 by muribe-l          #+#    #+#             */
/*   Updated: 2024/01/03 20:42:09 by muribe-l         ###   ########.fr       */
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

static void	insertword(char *s, char **a, int len)
{
	*a = (char *)malloc(sizeof(char) * len + 1);
	if (*a)
		ft_strlcpy(*a, s, len + 1);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		len;
	int		i;
	int		j;

	array = (char **)malloc(sizeof(char *) * (ft_wcount(s, c) + 1));
	if (!array || !s)
		return (NULL);
	len = 0;
	i = 0;
	j = 0;
	while (s[i])
	{
		if (s[i] != c)
			len++;
		if ((s[i] == c || !s[i + 1]) && len > 0)
		{
			insertword((char *)&s[i - len + (s[i] != c)], &array[j++], len);
			len = 0;
		}
		i++;
	}
	array[j] = NULL;
	return (array);
}
/*
int	main()
{
	int	i = 0;
	char **a = ft_split("  ei ze esatek jiji h", ' ');
	while (a[i] != NULL)
	{
		printf("%s\n", a[i]);
		i++;
	}
		
}*/