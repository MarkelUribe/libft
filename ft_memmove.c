/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 11:49:06 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/13 15:23:21 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	void	*o_dst;

	o_dst = dst;
	while (len > 0)
	{
		*(char *)dst = *(char *)src;
		dst++;
		src++;
		len--;
	}
	return (o_dst);
}

#include <string.h>
int	main()
{
	const char src[50] = "eunooon";
   	char dest[50] =  "zezeaaaa";
	memmove(dest, src, 5);
	printf("%s\n", dest);

   return(0);
}
