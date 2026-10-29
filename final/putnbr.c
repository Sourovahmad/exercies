#include <unistd.h>



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


int main (void){
    putnbr(-23770);
    write(1, "\n", 1);

    return (0);
}