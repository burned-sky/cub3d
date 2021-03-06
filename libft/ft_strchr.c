/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: statooin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/23 00:35:00 by statooin          #+#    #+#             */
/*   Updated: 2020/05/23 00:35:59 by statooin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *s, int cchar)
{
	while (*s != (char)cchar)
		if (!*s++)
			return (0);
	return ((char *)s);
}
