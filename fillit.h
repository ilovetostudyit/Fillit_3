/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ehaggon <ehaggon@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/02/14 14:41:42 by ehaggon           #+#    #+#             */
/*   Updated: 2019/02/15 16:50:13 by ehaggon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <string.h>

struct Figures {
	int figure_vertical_line;
	int figure_horizontal_line;
	int figure_box;
	int figure_l_up_left;
	int figure_l_up_right;
	int figure_l_down_right;
	int figure_l_down_left;
	int figure_l_right_up;
	int figure_l_left_up;
	int figure_l_right_down;
	int figure_l_left_down;
	int figure_t_up;
	int figure_t_down;
	int figure_t_left;
	int figure_t_right;
	int figure_z_vert_right;
	int figure_z_vert_left;
	int figure_z_hor_right;
	int figure_z_hor_left;
	int id;
};
struct Figures Figure1;

//libft
void	*ft_memset(void *str, int c, size_t len);
char	*ft_strnew(size_t size);
int		ft_strlen(char *str);
char	*ft_strcpy(char *dst, const char *src);
char	*ft_strsub(char const *s, unsigned int start, size_t len);

//validation of norm
int		validTetriminos1(char *str);
int validTetriminos2(char *str);
int checklinks(char *str, int cnt);
int	validTetriminos4(char *str);

//validation of form
int vertical_line(char *str);
char	insert_vertical_line(char *str, int cur);
int 	box(char *str);
int horizontal_line(char *str);
int		l_up_left(char *str);
int        l_up_right(char *str);
int        l_down_right(char *str);
int        l_down_left(char *str);
int        l_right_up(char *str);
int        l_left_up(char *str);
int        l_right_down(char *str);
int        l_left_down(char *str);
int        t_down(char *str);
int        t_up(char *str);
int        t_left(char *str);
int        t_right(char *str);
int        z_hor_left(char *str);
int        z_hor_right(char *str);
int        z_vert_right(char *str);
int        z_vert_left(char *str);

//map construction
char	map(char *str, int square);
int		define_figure(char *str);
char	solve(char *str, int number);
char	insert_figure(int number);
int        cut_figure(char *str);
void	printstruct(struct Figures Figure1);
void	map_insert(struct Figures Figure1);

//new map construction
char *createmapp(int a, char *str);
int number_of_hash(char *str);
int sqrt_hash(int hash);
char *coloring(char *str);
char *createorder(int a, char *str);
