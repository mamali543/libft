/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 20:30:49 by mamali            #+#    #+#             */
/*   Updated: 2019/10/22 23:26:27 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	*o;

	i = 0;
	o = (unsigned char *)s1;
	p = (unsigned char *)s2;
	while ((*o || *p) && i++ < n)
	{
		if (*o != *p)
			return (*o - *p);
		else
		{
			o++;
			p++;
		}
	}
	return (0);
}
