/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/17 17:38:13 by rceschel          #+#    #+#             */
/*   Updated: 2024/12/17 19:50:08 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_split(char const *s, char c)
{
	int		i;
	int		j;
	int		occ;
	int		*sep_index;
	int		*len;
	char	**splitted;

	i = 0;
	occ = 0;
	while(s[i])
	{
		if(s[i] == c)
			occ++;
		i++;
	}
	
	sep_index = malloc(occ * sizeof(int));
	len = malloc((occ + 2) * sizeof(int));
	splitted = malloc((occ + 2) * sizeof(char *));

	i = 0;
	j = 0;
	while(s[i])
	{
		if(s[i] == c)	
		{
			sep_index[j] = i;
			i++;
			j++;
			continue;
		}
		len[j] += 1;
		i++;
	}

	j = 0;
	while(len[j])
	{
		splitted[j] = malloc((len[j] + 1) * sizeof(char));
		j++;
	}
	i = 0;
	j = 0;
	if(sep_index[0] == 0)
		sep_index++;
	while(s[j])
	{
		if(s[j] == c || s[j + 1] == '\0')
		{
			ft_strlcpy(splitted[i], s, len[i] + 1);
			i++;
			s += j + 1;
			j = 0;
			continue;
		}
		j++;
	}
	
	return (splitted);

}
