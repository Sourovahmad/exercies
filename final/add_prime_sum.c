#include <unistd.h>


int isPrime (int nb){

    if (nb < 2){
        return 0;
    }

    int i = 2;
    while (i <= nb / i){
        if (nb % i == 0){
            return 0;
        }
        i++;
    }   
    return 1;
}


int ft_atoi(char *str){
    int sign = 1; 
    int result = 0;
    int index = 0;

    if(str[0] == '-'){
        sign = -1;
    }

    while(str[index]){
        if(str[index] >= '0' && str[index] <= '9'){
            result = (result * 10) + (str[index] - '0');
        }else{
            return (0);
        }
        index ++;
    }

    return (result * sign);


}



void putnbr_recursive(long nb){

    if (nb >= 10){
        putnbr_recursive(nb / 10);
    }

    char singleChar;
    singleChar = (nb % 10) + '0';

    write(1, &singleChar, 1);
    
}


void putnbr(int nb){

    long longnb;
    longnb = nb;    

    if(nb < 0){
        write(1, "-", 1);
        longnb *= -1;
    }

    putnbr_recursive(longnb);
}


int main(int argc, char **argv){

    int totalSum = 0;

    if (argc == 2){
        int nb = ft_atoi(argv[1]);
        int index = 0;

        while (index <= nb){
            if(isPrime(index) == 1){
                totalSum += index;
            }

            index ++;
        }
    }

    putnbr(totalSum);
    write(1, "\n", 1);

    return (0);
}