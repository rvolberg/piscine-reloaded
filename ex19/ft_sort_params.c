/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rvolberg <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 15:46:29 by rvolberg          #+#    #+#             */
/*   Updated: 2017/11/08 15:05:57 by rvolberg         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_putchar(char c);

void	ft_putstr(char *str)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		i++;
	}
}

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	if (s1[i] != '\0' || s2[i] != '\0')
	{
		while (s1[i] == s2[i])
		{
			i++;
		}
		return (s1[i] - s2[i]);
	}
	else
		return (0);
}

void	my_swap(char **s1, char **s2)
{
	char *tmp;

	tmp = *s1;
	*s1 = *s2;
	*s2 = tmp;
}

int		main(int argc, char **argv)
{
	int i;

	i = 1;
	while (i < (argc - 1))
	{
		if ((ft_strcmp(argv[i], argv[i + 1])) > 0)
		{
			my_swap(&argv[i], &argv[i + 1]);
			i = 0;
		}
		i++;
	}
	i = 1;
	while (i <= (argc - 1))
	{
		ft_putstr(argv[i]);
		ft_putchar('\n');
		i++;
	}
	return (0);
}
