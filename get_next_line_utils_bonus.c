/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils_bonus.c                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nhildred <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/22 18:33:18 by nhildred          #+#    #+#             */
/*   Updated: 2020/12/22 18:33:22 by nhildred         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line_bonus.h"

char	*ft_strdup(char *src)
{
	char	*cpy;
	int		a;
	int		b;

	a = 0;
	b = 0;
	while (src[b])
		b += 1;
	if (!src || !(cpy = (char*)malloc(sizeof(char) * b + 1)))
		return (NULL);
	while (a < b)
	{
		cpy[a] = src[a];
		a++;
	}
	cpy[a] = '\0';
	return (cpy);
}

char	*ft_strchr(const char *str, int c)
{
	char	*a;
	int		b;

	b = 0;
	a = (char *)str;
	while (a[b] != '\0' && a[b] != (char)c)
		b++;
	if (a[b] != (char)c)
		return (NULL);
	else
		return ((char*)str + b);
}

int		ft_strlen(char *str)
{
	int a;

	a = 0;
	while (str[a])
		a++;
	return (a);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t		a;
	size_t		b;
	char		*c;

	a = 0;
	b = 0;
	c = (char*)malloc(sizeof(*s) * (len + 1));
	if (!s)
		return (NULL);
	if (!c)
		return (NULL);
	while (s[a])
	{
		if (a >= start && b < len)
		{
			c[b] = s[a];
			b++;
		}
		a++;
	}
	c[b] = 0;
	return (c);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	int		a;
	int		b;
	int		c;
	char	*d;

	a = -1;
	if (!s1 || !s2)
		return (NULL);
	b = ft_strlen((char*)s1);
	c = ft_strlen((char*)s2);
	d = (char *)malloc(sizeof(char) * (b + c + 1));
	if (d == NULL)
		return (NULL);
	while (s1[++a])
		d[a] = s1[a];
	a = -1;
	while (s2[++a])
	{
		d[b] = s2[a];
		b++;
	}
	d[b] = '\0';
	free((char*)s1);
	return (d);
}
