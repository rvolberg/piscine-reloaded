/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 13:10:17 by rvolberg          #+#    #+#             */
/*   Updated: 2017/11/07 13:30:04 by rvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_sqrt(int nb)
{
	int rc;

	rc = 1;
	if (nb > 2147395600 || nb < 0)
	{
		return (0);
	}
	while (rc <= nb)
	{
		if (rc * rc == nb)
		{
			return (rc);
		}
		rc++;
	}
	return (0);
}