#include <unsitd.h>


char *ft_strrev(char *str){
    int a; 
    while (str[a])
    a++; 

    int right = a - 1;
    int left = 0;


    while(right >= 0){

        if(right > left){
            char tempChar = str[left] 
            str[left] = str[right];  
            str[right] = tempChar;
        }
        
        right--; 
        left++;

    }
    return str;

}