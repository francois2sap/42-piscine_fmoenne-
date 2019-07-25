/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strdup.c                                      .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 11:10:09 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 17:14:41 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*ab;
	int		i;
	int		l;

	i = 0;
	l = 0;
	while (src[l])
		l++;
	if (!(ab = (char*)malloc(sizeof(char) * l + 1)))
	{
		return (NULL);
	}
	while (src[i])
	{
		ab[i] = src[i];
		i++;
	}
	ab[i] = '\0';
	return (ab);
}
