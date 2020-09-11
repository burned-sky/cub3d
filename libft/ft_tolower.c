/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: statooin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/05/22 10:53:40 by statooin          #+#    #+#             */
/*   Updated: 2020/05/22 10:54:29 by statooin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int			ft_tolower(int cchar)
{
	if (cchar >= 'A' && cchar <= 'Z')
		return (cchar + 32);
	else
		return (cchar);
}
