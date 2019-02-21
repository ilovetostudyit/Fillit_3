/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:37:11 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/21 17:29:43 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int placing_figure(char *str, char *map, char a, int start, int size)
{
	int mapcntr;
	int hashcntr;
	int strcntr;
	int countbf;

	mapcntr = 0;
	hashcntr = 0;
	strcntr = 0;
	countbf = countbefore(str, firstelement(str, a));
	mapcntr = firstelement(str, a);
	while (hashcntr < 4 && str[mapcntr])
	{
		if (str[mapcntr] == a)
		{
			strcntr = countbefore(str, mapcntr);
			if (map[start + strcntr - countbf] == '.')
				{
					map[start + strcntr - countbf] = a;
					hashcntr++;
					if (hashcntr == 4)
						return(1);
				}
			else
			{
				cleaning_figure(map, a);
				return(0);
			}
		}
		if (str[mapcntr] == '\n')
			start = start + size + 1;
		mapcntr++;
	}
	return(1);
}

int find_answer(char *str, char *map, char *order, int size, int index)
{
	int start;
	char *copy_map;

	index++;
	if (order[index] == '\0')
	{
		ft_putstr(map);
		return(1);
	}
	copy_map = ft_strnew((size * (size + 1)));
	ft_strcpy(copy_map, map);
	start = 0;
	while (copy_map[start])
	{
		if (placing_figure(str, copy_map, order[index], start, size))
		{
			if (find_answer(str, copy_map, order, size, index))
				return(1);
		}
		ft_strcpy(copy_map, map);
		start++;
	}
	return(0);
}

int order_size(char *order)
{
	int i;

	i = 0;
	while(order[i] != '\0')
		i++;
	return(i);
}

int firstelement(char *str, char a)
{
	int cntr;

	cntr = 0;
	while(str[cntr] != '\0')
	{
		if (str[cntr] == a)
			return(cntr);
		cntr++;
	}
	return(0);
}

int countbefore(char *str, int cntr)
{
	int cntbef;

	cntbef = 0;
	while (str[cntr] != '\n')
	{
		cntr++;
		cntbef++;
	}
	return(4 - cntbef);
}

int cleaning_figure(char *str, char a)
{
	int i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == a)
			str[i] = '.';
		i++;
	}
	return (0);
}
