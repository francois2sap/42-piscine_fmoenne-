/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_strjoin.c                                     .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/15 16:20:05 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/17 19:26:08 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>

int		ft_strseplen(char *str)
{
	int i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int		ft_strlen_all(char **str, int size)
{
	int i;
	int j;
	int catsize;

	catsize = 0;
	j = 0;
	i = 0;
	while (i < size)
	{
		while (str[i][j])
		{
			j++;
			catsize++;
		}
		j = 0;
		i++;
	}
	return (catsize);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*dest;
	int		str;
	int		charac;
	int		j;

	charac = 0;
	str = 0;
	if (!(dest = malloc(sizeof(ft_strlen_all(strs, size))
					+ sizeof(ft_strseplen(sep)) * sizeof(size - 1))))
		return (0);
	while (str < size)
	{
		while (strs[str][j])
			dest[charac++] = strs[str][j++];
		j = 0;
		while (sep[j] && str < size - 1)
			dest[charac++] = sep[j++];
		j = 0;
		str++;
	}
	dest[charac] = '\0';
	return (dest);
}
