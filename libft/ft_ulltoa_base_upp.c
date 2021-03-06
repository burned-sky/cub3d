/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ulltoa_base_upp.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: statooin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 08:51:12 by statooin          #+#    #+#             */
/*   Updated: 2020/07/30 08:51:17 by statooin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char		*ft_convert(unsigned long long n, \
							const unsigned base, \
							char *str, size_t i)
{
	int			res;
	char		*bstr;

	res = 0;
	bstr = "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	while (base == 1 && (i <= ft_nbrlenbase_ull(n, base)))
	{
		str[i] = '1';
		i++;
		if (i == ft_nbrlenbase_ull(n, base) - 1)
			return (str);
	}
	if (n > 0)
	{
		res = n % base;
		str[i] = bstr[res];
		i++;
		ft_convert(n / base, base, str, i);
	}
	return (str);
}

char			*ft_ulltoa_base_upp(unsigned long long nb, const unsigned base)
{
	int			nb_len;
	char		*str;

	nb_len = 0;
	if (base <= 0)
	{
		return (NULL);
	}
	if (nb == 0)
	{
		return (ft_strdup("0"));
	}
	nb_len = ft_nbrlenbase_ull(nb, base);
	str = (char *)ft_strnew(sizeof(char) * (nb_len + 1));
	if (str != NULL)
	{
		str = ft_convert(nb, base, str, 0);
		str[nb_len] = '\0';
		str = ft_strrev(str, 0);
	}
	return (str);
}
