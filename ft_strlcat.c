/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:50:08 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/13 18:41:08 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(
		char *restrict dst,
		const char *restrict src,
		size_t dstsize)
{
	int	s;

	s = ft_strlen(src) + ft_strlen(dst);
	dstsize--;
	while (*dst != '\0')
	{
		dst++;
		dstsize--;
	}
	while (dstsize > 0)
	{
		*dst = *src;
		dst++;
		src++;
		dstsize--;
	}
	*dst = '\0';
	return (s);
}
/*
int main()
{
    char str[11]= "kaixo";
    char str2[] = "euuuuuuu";
    int s;

    s = ft_strlcat(str, str2, 11);
    printf("%s\n%d", str, s);

    return 0;
}*/
