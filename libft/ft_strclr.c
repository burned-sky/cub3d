/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strclr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: statooin <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/30 10:22:56 by statooin          #+#    #+#             */
/*   Updated: 2020/07/30 10:22:59 by statooin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_strclr(char *string)
{
	int index;

	index = 0;
	while (string[index] != '\0')
	{
		string[index] = '\0';
		index++;
	}
}
