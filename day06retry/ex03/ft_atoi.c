/* ************************************************************************** */
/*                                                          LE - /            */
/*                                                              /             */
/*   ft_atoi.c                                        .::    .:/ .      .::   */
/*                                                 +:+:+   +:    +:  +:+:+    */
/*   By: fmoenne- <marvin@le-101.fr>                +:+   +:    +:    +:+     */
/*                                                 #+#   #+    #+    #+#      */
/*   Created: 2019/07/08 18:28:49 by fmoenne-     #+#   ##    ##    #+#       */
/*   Updated: 2019/07/10 16:59:41 by fmoenne-    ###    #+. /#+    ###.fr     */
/*                                                         /                  */
/*                                                        /                   */
/* ************************************************************************** */

int		ft_atoi(char *str)
{
	int i;
	int dest;
	int neg;

	i = 0;
	neg = 1;
	dest = 0;
	while (str[i] == '\t' || str[i] == '\n' || str[i] == '\r' ||
			str[i] == '\v' || str[i] == '\f' || str[i] == '\r' || str[i] == ' ')
		i++;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			neg = -neg;
		i++;
	}
	while (str[i] >= '0' && str[i] <= '9')
	{
		dest = (dest * 10) + (str[i] - '0');
		i++;
	}
	return (dest * neg);
}
