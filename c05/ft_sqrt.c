int ft_sqrt(int nb){
    int i = 0; 
    int result = 0;
    while (result != nb){
        result = i * i; 
        i++;
    }   
    return i;

}