char *ft_strncat(char *dest, char *src, unsigned int nb)
{
    int a = 0; 
    int b = 0;

    while(dest[a])
    a++;    

    while (b < nb && src[b]){
        dest[a] = src[b]; 
        a++;
    }   

    dest[a] = '\0'; 
    return (dest); 
}