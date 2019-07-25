/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_sort_params.c                                 .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/14 11:25:16 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/14 11:28:20 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <unistd.h>

int		ft_strcmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s2[i] != s1[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

char	**ft_sort(int ac, char **av)
{
	int		i;
	int		j;
	char	*tmp;

	j = 1;
	i = 0;
	while (i != ac)
	{
		while (j != ac)
		{
			if (ft_strcmp(av[j], av[i]) > 0)
			{
				tmp = av[i];
				av[i] = av[j];
				av[j] = tmp;
			}
			j++;
		}
		j = 0;
		i++;
	}
	return (av);
}

int		main(int ac, char **av)
{
	int i;

	i = 1;
	ft_sort(ac, av);
	while (i != ac)
	{
		while (*av[i])
			write(1, av[i]++, 1);
		write(1, "\n", 1);
		i++;
	}
	return (0);
}
