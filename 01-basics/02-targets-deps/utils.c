#include "utils.h"

// Function to get the length of a string
size_t  ft_strlen(const char *str)
{
    size_t i = 0;

    while (str[i])
        i++;
    return (i);
}

// Function to compare two strings
int ft_strcmp(const char *s1, const char *s2)
{
    size_t i = 0;

    while (s1[i] && s1[i] == s2[i])
        i++;
    return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}
