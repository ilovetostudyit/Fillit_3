/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ValidForm.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 17:13:56 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/14 17:14:29 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int vertical_line(char *str)
{
	int i;
	int vertical_lines;

	vertical_lines = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' && str[i + 15] == '#')
		{
			vertical_lines++;
		}
		i++;
	}
	return (vertical_lines);
}

char	insert_vertical_line(char *str, int cur)
{
	int i;
	int a;
	int b;
	int c;

	a = 0;
	b = 0;
	c = 0;
	i = 0;
//	while (Figure1.figure_vertical_line > 0)
	while (str[i] != '\0')
	{
		if (str[i] == '.')
			if (str[i + 5 + a] == '.')
				if (str[i + 10 + b] == '.')
					if (str[i + 15 + c] == '.')
					{
						str[i] = cur;
						str[i + 5 + a] = cur;
						str[i + 10 + b] = cur;
						str[i + 15 + c] = cur;
						break;
					}
		i++;
	}
	return (*str);
}


int horizontal_line(char *str)
{
	int i;
	int horizontal_lines;

	horizontal_lines = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 3] == '#')
		{
			horizontal_lines++;
		}
		i++;
	}
	return (horizontal_lines);
}

int 	box(char *str)
{
	int i;
	int box;

	box = 0;
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
		{
			box++;
		}
		i++;
	}
	return (box);
}

/*	L	*/
/*		*/
/*		*/
/*		*/

int		l_up_left(char *str)
{
	int i;
	int l_up_left;

	i = 0;
	l_up_left = 0;

	while (str[i] != '\0')
	{
		if (str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
		{
			l_up_left++;
		}
		i++;
	}
	return (l_up_left);
}

int        l_up_right(char *str)
{
    int i;
    int l_up_right;

    i = 0;
    l_up_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1]  == '#' && str[i + 5] == '#' && str[i + 10] == '#')
        {
            l_up_right++;
        }
        i++;
    }
    return (l_up_right);
}

int        l_down_right(char *str)
{
    int i;
    int l_down_right;

    i = 0;
    l_down_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 10] == '#' && str[i + 11] == '#')
        {
            l_down_right++;
        }
        i++;
    }
    return (l_down_right);
}

int        l_down_left(char *str)
{
    int i;
    int l_down_left;

    i = 0;
    l_down_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 9] == '#' && str[i + 10] == '#')
        {
            l_down_left++;
        }
        i++;
    }
    return (l_down_left);
}

int        l_right_up(char *str)
{
    int i;
    int l_right_up;

    i = 0;
    l_right_up = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 3] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
        {
            l_right_up++;
        }
        i++;
    }
    return (l_right_up);
}

int        l_left_up(char *str)
{
    int i;
    int l_left_up;

    i = 0;
    l_left_up = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
        {
            l_left_up++;
        }
        i++;
    }
    return (l_left_up);
}

int        l_right_down(char *str)
{
    int i;
    int l_right_down;

    i = 0;
    l_right_down = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 7] == '#')
        {
            l_right_down++;
        }
        i++;
    }
    return (l_right_down);
}

int        l_left_down(char *str)
{
    int i;
    int l_left_down;

    i = 0;
    l_left_down = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 5] == '#')
        {
            l_left_down++;
        }
        i++;
    }
    return (l_left_down);
}

/*	T	*/
/*		*/
/*		*/
/*		*/

int        t_down(char *str)
{
    int i;
    int t_down;

    i = 0;
    t_down = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 2] == '#' && str[i + 6] == '#')
        {
            t_down++;
        }
        i++;
    }
    return (t_down);
}

int        t_up(char *str)
{
    int i;
    int t_up;

    i = 0;
    t_up = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && str[i + 6] == '#')
        {
            t_up++;
        }
        i++;
    }
    return (t_up);
}

int        t_left(char *str)
{
    int i;
    int t_left;

    i = 0;
    t_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && str[i + 10] == '#')
        {
            t_left++;
        }
        i++;
    }
    return (t_left);
}

int        t_right(char *str)
{
    int i;
    int t_right;

    i = 0;
    t_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && str[i + 10] == '#')
        {
            t_right++;
        }
        i++;
    }
    return (t_right);
}

/*	Z	*/
/*		*/
/*		*/
/*		*/

int        z_hor_left(char *str)
{
    int i;
    int z_hor_left;

    i = 0;
    z_hor_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 6] == '#' && str[i + 7] == '#')
        {
            z_hor_left++;
        }
        i++;
    }
    return (z_hor_left);
}

int        z_hor_right(char *str)
{
    int i;
    int z_hor_right;

    i = 0;
    z_hor_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 1] == '#' && str[i + 4] == '#' && str[i + 5] == '#')
        {
            z_hor_right++;
        }
        i++;
    }
    return (z_hor_right);
}

int        z_vert_right(char *str)
{
    int i;
    int z_vert_right;

    i = 0;
    z_vert_right = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 4] == '#' && str[i + 5] == '#' && str[i + 9] == '#')
        {
            z_vert_right++;
        }
        i++;
    }
    return (z_vert_right);
}

int        z_vert_left(char *str)
{
    int i;
    int z_vert_left;

    i = 0;
    z_vert_left = 0;

    while (str[i] != '\0')
    {
        if (str[i] == '#' && str[i + 5] == '#' && str[i + 6] == '#' && str[i + 11] == '#')
        {
            z_vert_left++;
        }
        i++;
    }
    return (z_vert_left);
}
