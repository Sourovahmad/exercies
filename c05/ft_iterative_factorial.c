int ft_iterative_factorial(int nb){
    int result = 0;
    while (nb > 0){
        result *= nb;
        nb--;
    }
}