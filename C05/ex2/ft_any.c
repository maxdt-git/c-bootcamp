int    ft_any(char **tab, int(*f)(char*))
{
    int i;

    i = 0;
    while (tab[i] != 0)
    {
        if (f(tab[i]) != 0)
            return (1);
        i++;
    }
    return (0);
}
/*
#include <stdio.h>

int    is_not_empty(char *tab)
{
    return (tab[0] != '\0');
}

int    ft_any(char **tab, int (*f)(char *));

int    main(void)
{
    char *tab1[] = {"", "", "salut", NULL};
    char *tab2[] = {"", "", "", NULL};

    printf("%d\n", ft_any(tab1, is_not_empty));
    printf("%d\n", ft_any(tab2, is_not_empty));
    return (0);
}*/
