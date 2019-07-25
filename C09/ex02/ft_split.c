/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_split.c                                       .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/24 13:38:44 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/24 18:51:43 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef	struct	s_zer
{
	int i;
	int y;
	int m;
	int let;
}				t_zer;

int		check_end(char *str, int index)
{
	if (str[index] == '\0')
		return (0);
	else
		return (1);
}

char	**ft_killchar(char **strs)
{
	int i;
	int j;

	i = 0;
	j = 0;
	while (strs[i] != 0)
	{
		if (strs[i][0] == '\0')
			strs[i] = 0;
		i++;
	}
	return (strs);
}

struct s_zer ft_init(struct s_zer b)
{
	b.i = -1;
	b.y = 0;
	b.m = 0;
	b.let = 0;

	return (b);
}

char	**ft_split(char *str, char *charset)
{
	char **strs;
	t_zer a;
	a = ft_init(a);
	strs = malloc(sizeof(*strs) * 150);
	strs[a.m] = malloc(sizeof(*strs) * 25);
	while(str[a.i++])
	{
		while(charset[a.y])
			if (str[a.i] != charset[a.y])
				a.y++;
			else if (str[a.i] == str[a.i + 1])
				a.i++;
			else if (check_end(str, a.i) && a.i++)
			{
				strs[a.m][a.let] = '\0';
				a.m++;
				strs[a.m] = malloc(sizeof(*strs) * 25);
				a.y++;
				a.let = 0;
			}
		a.y = 0;
		strs[a.m][a.let] = str[a.i];
		a.let++;
	}
	strs[a.m + 1] = 0;
	return (ft_killchar(strs));
}

int main()
{
	char *str = "melifon de la rue zer sisi la mifaj";
	char *charset = "i";
	char **testing;
	int  ijk;
	testing = ft_split(str, charset);
	while (testing[ijk] != 0)
	{
		printf("%s\n", testing[ijk]);
		ijk++;
	}

}
