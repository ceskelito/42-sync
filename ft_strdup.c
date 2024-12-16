/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/16 15:30:11 by rceschel          #+#    #+#             */
/*   Updated: 2024/12/16 16:16:50 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	//int		i;

	str = (char *)malloc(sizeof(s) + 1);
	
	ft_strlcpy(str, (char *)s, ft_strlen(s));

	return (str);
	
	/*i = 0;
	while(s[i])
	{
		str[i] = s[i];
		i++;
	}
	str[i + 1] = '\0';
	return (str);*/
}
