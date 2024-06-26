/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   max.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyakuben <yyakuben@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/09 19:23:45 by yyakuben          #+#    #+#             */
/*   Updated: 2024/05/09 19:43:48 by yyakuben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	max(int *tab, unsigned int len)
{
	int	i;
	int	max;

	i = 0;
	max = -2147483647;
	if (len < 1)
		return (0);
	while (i != len)
	{
		if (tab[i] > max)
			max = tab[i];
		i++;
	}
	return (max);
}

