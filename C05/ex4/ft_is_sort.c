int    ft_is_sort(int *tab, int length, int(*f)(int, int))
{
    int    i;
    int    croi;
    int    decroi;

    i = 0;
    croi = 1;
    decroi = 1;
    if (length <= 1)
        return (1);
    while (i < length - 1)
    {
        if (f(tab[i], tab[i + 1]) > 0)
            croi = 0;
        if (f(tab[i], tab[i + 1]) < 0)
            decroi = 0;
        i++;
    }
    if (croi == 1 || decroi == 1)
        return (1);
    return (0);
}
/*
#include <stdio.h>

int soustraction(int a, int b)
{
    return (a - b);
}

int main(void)
{
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {5, 4, 3, 2, 1};
    int c[] = {1, 3, 2, 4, 5};
    int d[] = {2, 2, 2, 2};
    int e[] = {1};

    printf("a: %d\n", ft_is_sort(a, 5, soustraction));
    printf("b: %d\n", ft_is_sort(b, 5, soustraction));
    printf("c: %d\n", ft_is_sort(c, 5, soustraction));
    printf("d: %d\n", ft_is_sort(d, 4, soustraction));
    printf("e: %d\n", ft_is_sort(e, 1, soustraction));

    return (0);
}*/
