/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 11:50:08 by muribe-l          #+#    #+#             */
/*   Updated: 2024/01/03 20:44:40 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *restrict dst,
const char *restrict src,
size_t dstsize)
{
	size_t	s;

	s = ft_strlen(src);
	s += ft_strlen(dst);
	if (dstsize <= ft_strlen(dst))
		return (ft_strlen(src) + dstsize);
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
    char str[10]= "kgfgg";
    char str2[] = "aaaaaaaaaaaaaaaaaaa";
    int s;

    s = ft_strlcat(str, str2, 67);
    printf("%s\n%d", str, s);

    return 0;
}
*/