#include <stdlib.h>

void*ft_map(int *tab, int length, int(*f)(int))
{
    int index;
    int *grid;

    if (!tab || length <= 0 || !f)
        return (NULL);
    grid = malloc(sizeof(int) * length);
    if(!grid)
        return(NULL);
    index = 0;
    while (index < length)
    {
        grid[index] = f(tab[index]);
        index++;
    }
    return(grid);
}
/*
#include <stdio.h>

int    square(int nb)
{
    return (nb * nb);
}

int    main(void)
{
    int tab[] = {5, 2, 3, 4, 5};
    int length = 5;
    int *result;
    int i;

    result = ft_map(tab, length, square);
    if (!result)
        return (1);
    i = 0;
    while (i < length)
    {
        printf("%d ", result[i]);
        i++;
    }
    printf("\n");
    return (0);
}*/
