/*
** EPITECH PROJECT, 2019
** my_strcat
** File description:
** my_strcat
*/

#include <stdlib.h>

char *my_strcpy(char *dest, char const *src);

size_t my_strlen(char const *str);

char *my_strdup(char const *src);

char *my_strcat(char const *dest, const char *src)
{
    char *tmp = NULL;
    size_t i = 0;

    if (src == NULL)
        return (my_strdup(dest));
    if (dest == NULL || dest[0] == 0)
        return (my_strdup(src));
    tmp = malloc(sizeof(char) * (my_strlen(src) + my_strlen(dest) + 1));
    for (; dest[i]; i++)
        tmp[i] = dest[i];
    for (int j = 0; src[j]; j++)
        tmp[i++] = src[j];
    tmp[i] = 0;
    return (tmp);
}
