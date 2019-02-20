/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   placing.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/15 17:37:11 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/20 13:55:38 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int placing_figures(char *str, char *map, char *order, int size)
{
	char a;
	int i;
	int start;
	int success;
	int placed;

	start = 0;
	i = 0;
	success = 0;
	placed = 0;
	printf("ORDER %s\n", order);
	while (map[start] && order[i] != '\0')
	{
		if (placing_figure(str, map, order[i], start, size) == 1)
		{
			success++;
			i = i + 1;
			placed = start;
		}
		start++;
	}
	return(success);
}

int order_size(char *order)
{
	int i;

	i = 0;
	while(order[i] != '\0')
		i++;
	return(i);
}

int placing_figure(char *str, char *map, char a, int start, int size)
{
	int mapcntr;
	int hashcntr;
	int strcntr;
	int countbf;

	mapcntr = 0;
	hashcntr = 0;
	strcntr = 0;
	//printf("!!!char = %c\n", a);
	countbf = countbefore(str, firstelement(str, a));
	mapcntr = firstelement(str, a);
	//printf("COUNTBF %d\n", countbf);
	while (hashcntr < 4 && str[mapcntr])
	{
		//printf("!!! %d == %c\n", mapcntr, str[mapcntr]);
		if (str[mapcntr] == a)
		{
			//printf("macntr == %d\n", mapcntr);
			strcntr = countbefore(str, mapcntr);
			if (map[start + strcntr - countbf] == '.')
				{
					map[start + strcntr - countbf] = a;
					//printf("%s\n", map);
					//printf("trying to place it in: %d\n", (start + strcntr - countbf));
					hashcntr++;
					if (hashcntr == 4)
						return(1);

				}
			else
			{
				cleaning_figure(map, a);
				return(-1);
			}
		}
		if (str[mapcntr] == '\n')
			start = start + size + 1;
		//printf("start = %d\n", start);
		mapcntr++;
	}
	return(1);
}

int firstelement(char *str, char a)
{
	int cntr;

	//printf("char = %c\n", a);
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
