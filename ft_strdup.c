/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: migusant <migusant@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 17:56:03 by migusant          #+#    #+#             */
/*   Updated: 2025/04/21 23:03:26 by migusant         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*s_dest;

	s_dest = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (!s_dest)
		return (NULL);
	ft_strlcpy(s_dest, s, ft_strlen(s) + 1);
	return (s_dest);
}
