/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rceschel <rceschel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/10 14:24:30 by rceschel          #+#    #+#             */
/*   Updated: 2024/12/16 14:53:33 by rceschel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_lower(int c)
{
	if (c >= 'A' || c <= 'Z')
		return (c + 32);
	return (c);
}