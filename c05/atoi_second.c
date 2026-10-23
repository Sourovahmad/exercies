int ft_atot(const char *str, char str_base){

    int i = 0; 
    int sign = 1; 
    int result = 0; 
    int digit;

    if(str_base < 2 || str_base > 16){
        return (0);
    }

    if(str[i] == '-'){
        sign = -1;
        i++;
    }

    while (str[i]){
        if(str[i] >= '0' && str[i] <= '9'){
         digit = str[i] - '0'; 
        }else if(str[i] >= 'a' && str[i] <= 'f'){
            digit = str[i] - 'a' + 10;  
        }else if(str[i] >= 'A' && str[i] <= 'F'){
            digit = str[i] - 'A' + 10;  
        }else {
            break; 
        }

        if(digit >= str_base){
            break; 
        }

        result = result * str_base + digit; 
        i++;

    }

    return (result * sign);


}