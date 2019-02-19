/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   order_change.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/19 15:05:23 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/19 15:36:38 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
int change_order(char *order)
{
	int i;
	int min;
	int max;
	char temp;
	char in_temp;

	i = 0;
	max = 0;
	while (order[i + 1] != '\0' && order[i] > order[i + 1])
	{
		i++;
	}
	min = i;
	printf("%d\n", min);
	i++;
	max = order[i];
	printf("%c\n", max);
	while (order[i] != '\0')
	{
		if (order[i] < max)
			{
				temp = order[min];
				order[min] = order[i];
				order[i] = temp;
				printf("%s\n", order);
				return(0);
			}
		i++;
	}
	temp = order[min];
	printf("%d\n", temp);
	order[min] = order[min + 1];
	order[min + 1] = temp;
	printf("%s\n", order);
	return(0);
}

int main()
{
	char *str;

	if ((str = (char *)malloc(sizeof(char) * (10))) == 0)
		return(0);
	str = "ABCD";
	change_order(str);
}
