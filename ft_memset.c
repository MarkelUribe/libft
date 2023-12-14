/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: muribe-l <muribe-l@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/11 14:36:59 by muribe-l          #+#    #+#             */
/*   Updated: 2023/12/14 16:42:32 by muribe-l         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memset(void *b, int c, size_t len)
{
	void	*r;

	r = b;
	while (len > 0)
	{
		*(char *)b = c;
		b++;
		len--;
	}
	return (r);
}
/*
#include <stdio.h>
int	main(void)
{
	char str[] ="This is string.h library function";
   puts(str);

   ft_memset(str,'$',7);
   puts(str);
   
   return(0);
}*/
