/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shinckel <shinckel@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:22:29 by shinckel          #+#    #+#             */
/*   Updated: 2022/11/14 13:56:07 by shinckel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*aux;
	int		len;
	int		i;

	i = 0;
	if (!s || !f)
		return (NULL);
	len = ft_strlen(s) + 1;
	aux = (char *)malloc(sizeof(char) * len);
	if (!aux)
		return (NULL);
	while (s[i])
	{
		aux[i] = f(i, s[i]);
		i++;
	}
	aux[i] = '\0';
	return (aux);
}

/* <non-standard> applies a function to each character of a string;
 * s = the string on which to iterate, f = function to apply to each character;
 * char(*f)(unsigned int, char)passing s index as argument to create new string;
 * ...resulting from successive application of 'f';
 * interesting usage for arithmetic operations(e.g.str = c + 1, jump one char);
 */

/*char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}*/
