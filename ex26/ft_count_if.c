/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_count_if.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/09 10:15:57 by rvolberg          #+#    #+#             */
/*   Updated: 2017/11/09 10:54:13 by rvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_count_if(char **tab, int (*f)(char*))
{
	int i;
	int c;

	c = 0;
	i = 0;
	while (tab[i] != '\0')
	{
		if (f(tab[i]) == 1)
			c++;
		i++;
	}
	return (c);
}
