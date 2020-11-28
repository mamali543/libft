/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mamali <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/10/21 16:09:01 by mamali            #+#    #+#             */
/*   Updated: 2019/10/23 00:53:58 by mamali           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	int		len;
	char	*p;

	i = 0;
	len = 0;
	p = NULL;
	while (s[len])
		len++;
	while (s[i])
	{
		if ((char)s[i] == (char)c)
		{
			p = ((char*)s + i);
		}
		i++;
	}
	if (s[len] == (char)c)
		return ((char *)(s + len));
	return (p);
}
