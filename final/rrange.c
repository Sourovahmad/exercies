#include <stdlib.h>

int *ft_rrange(int start, int end)
{
    int size = (start > end) ? start - end + 1 : end - start + 1;
    int *arr = malloc(sizeof(int) * size);

    if (!arr)
        return (NULL);

    int index = 0;
    while (index < size)
    {
        arr[index] = end;
        if (end > start)
            end--;
        else if (end < start)
            end++;
        index++;
    }

    return (arr);
}