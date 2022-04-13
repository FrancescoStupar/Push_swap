/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fstupar <fstupar@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/07 12:32:04 by fstupar           #+#    #+#             */
/*   Updated: 2022/04/13 17:45:12 by fstupar          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <stdio.h>
# include <stdarg.h>
# include <unistd.h>
# include <stdlib.h>

void	ft_putstr_fd(char *s, int fd);
char	*ft_itoa(int n);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);
char	*ft_strdup(const char *s1);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
size_t	ft_strlen(const char *s);
typedef struct s_list	t_list;

struct	s_list {
	int		i;
	t_list	*next;
};

t_list	*add_top(t_list **list, int i);
t_list	*add_bottom(t_list **head_ref, int new_data);
t_list	*delete_top(t_list *list);
int		delete_bottom(t_list *head);
void	s(t_list **head);
void	ss(t_list **head_a, t_list **head_b);
t_list	*pb(t_list *head_a, t_list **head_ref_b);
t_list	*pa(t_list *head_a, t_list **head_ref_b);
t_list	*ra(t_list **head);
t_list	*rb(t_list **head);
t_list	*rev_r(t_list **head);
int		get_top_integer(t_list *list);
int		get_bottom_integer(t_list *list);
int		get_second_integer(t_list *list);
void	print_list(t_list *list);
t_list	*big_sort(t_list **head_a, t_list **head_b);
t_list	*small_sort(t_list **head_a, t_list **head_b);
t_list	*rank_list(t_list *list_a, t_list **head_ref_a);
int		check_dup(char **argv);
int		number_links(t_list *list);
t_list	*very_small_sort(t_list **head_a);
t_list	*kinda_small_sort(t_list **head_a, t_list **head_b);
t_list	*anto(t_list **head_a);
int		check_nbr(char **argv);
int		check_range(char **argv);
int		is_sorted(t_list **list_a);
long	ft_atol(const char *str);
t_list	*ft_system(t_list **head_a, t_list **head_b);

#endif
