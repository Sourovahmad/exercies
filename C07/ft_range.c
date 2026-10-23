#include <stdlib.h>


int *ft_range(int min, int max){

    if (min >= max)
    return (NULL);

   int *arr = malloc(sizeof(int) * (max - min));   
    if(!arr){
        return (NULL);
    }

    int i = 0;
    while (min < max){
        arr[i] = min;
        min ++;
        i++;
    }

    return (arr);
}