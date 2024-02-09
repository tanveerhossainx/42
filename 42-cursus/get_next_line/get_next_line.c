/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thossain <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/24 17:24:52 by thossain          #+#    #+#             */
/*   Updated: 2024/01/24 17:24:57 by thossain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char    *read_file(int fd, char *res)
{
    char   *buffer;
    int byte_read;

    if (!res)
        res = ft_calloc(1, 1);
    buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    byte_read = 1;
    while (byte_read > 0)
    {
        byte_read = read(fd, buffer, BUFFER_SIZE);
        if (byte_read == -1)
        {
            free(buffer);
            return (NULL);
        }
        buffer[byte_read] = 0;
        res = ft_free(res, buffer);
        if (ft_strchr(buffer, '\n'))
            break;
    }
    free(buffer);
    return (res);
}

char    *ft_line(char *buffer)
{
    char    *line;
    int i;

    i = 0;
    if (!buffer[i])
        return (NULL);
    while (buffer[i] && buffer [i] != '\n')
    i++;
    line = ft_calloc(i + 2, sizeof(char));
    i = 0;
    while (buffer[i] && buffer[i] != '\n')
    {
        line[i] = buffer[i];
        i++;
    }
    if (buffer[i] && buffer[i] == '\n')
        line[i++] = '\n';
    return (line);
}
// char	*ft_free(char *buffer, char *buf)
// char	*ft_next(char *buffer)
// char	*get_next_line(int fd)