#include <stdio.h>


int is_power_of_2(unsigned int n){  

    if (n <= 0){
        return 0;
    }

    while (n > 1)
    {
        if (n % 2 != 0){
            return 0;
        }else{
            n = n / 2;
        }
    }

    return 1;


}


int main (void){
        printf("%i\n", is_power_of_2(1)); 
        return 0;
}