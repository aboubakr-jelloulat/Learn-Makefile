#include <stdio.h>
#include "utils.h"

int main(void)
{
    char *str1 = "Hello";
    char *str2 = "World";

    printf("Length of '%s' is %zu\n", str1, ft_strlen(str1));
    printf("Comparing '%s' and '%s': %d\n", str1, str2, ft_strcmp(str1, str2));

    return 0;
}
