/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:33:00 by nhildred          #+#    #+#             */
/*   Updated: 2020/12/22 19:13:10 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H
# include <unistd.h>
# include <stdlib.h>

int		new_line(char **str, char **line, int a);
int		liner(char **str, char **line, int r);
int		make_re(char **str, char **line, int r);
int		get_next_line(int fd, char **line);
char	*ft_strdup(char *src);
char	*ft_strchr(const char *str, int c);
int		ft_strlen(char *str);
char	*ft_substr(char const *s, unsigned int start, size_t len);
char	*ft_strjoin(char const *s1, char const *s2);

#endif
