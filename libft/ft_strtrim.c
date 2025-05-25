/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frromero <frromero@student.42madrid.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 16:23:11 by frromero          #+#    #+#             */
/*   Updated: 2024/10/03 21:20:08 by frromero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* Removes leading and trailing characters specified in 'set' from string 's1'*/

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*trim;
	size_t	len;
	size_t	i;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	i = 0;
	while (s1[i] && ft_strchr(set, s1[i]))
		i++;
	if (i == ft_strlen(s1))
		return (ft_strdup(""));
	len = ft_strlen(s1);
	while (s1[len - 1] && ft_strchr(set, s1[len - 1]))
		len--;
	trim = malloc(sizeof(char) * (len - i + 1));
	if (!trim)
		return (NULL);
	ft_strlcpy(trim, s1 + i, len - i + 1);
	return (trim);
}
