#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>


int is_prime (int nb){

    if(nb < 2){
         return 1;
    }
    int i = 2;

    while (i <= nb / i){
        if(nb % i == 0){
         return 0;
        }
        i++;
    }

    return 1;

}


int main (int argc, char **argv){


    if(argc != 2){
        write(1, "0", 1);
        write(1, "\n", 1);
        return 0;
    }

    int nb;
    nb = atoi(argv[1]);

    int result = 0;
    int a = 2;

    while (nb >= a){
        if(is_prime(a) == 1){
            result += a;
        }
        a++;
    }


    printf("%i\n", result);

    return 0;


}