/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_ultimate_range.c                              .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 13:38:24 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 19:24:03 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

int		ft_ultimate_range(int **range, int min, int max)
{
	int fill;
	int i;
	int l;

	l = max - min;
	if (l <= 0)
	{
		range = NULL;
		return (0);
	}
	if (!(*range = malloc(sizeof(**range) * l)))
	{
		return (-1);
	}
	fill = min;
	i = 0;
	while (fill < max)
	{
		range[0][i] = fill;
		fill++;
		i++;
	}
	return (i);
}
