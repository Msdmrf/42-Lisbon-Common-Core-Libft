/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:05:30 by migusant          #+#    #+#             */
/*   Updated: 2025/04/23 11:19:22 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t len)
{
	size_t				i;
	unsigned char		*temp_s;

	temp_s = (unsigned char *) s;
	i = 0;
	while (i < len)
	{
		temp_s[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
