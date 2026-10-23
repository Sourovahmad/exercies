#include <stdlib.h>


char *ft_strdup(char *src){
    int i = 0;

    while(src[i]){
        i++;
    }

    *pp = malloc(sizeof(char) * i + 1);
    if(!pp){
        return NULL;
    }

    int j = 0;
    while(src[j]){
        pp[j] = src[j];
        j++;
    }

    pp[j] = '\0';
    return pp;
}