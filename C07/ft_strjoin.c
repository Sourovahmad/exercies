#include <stdlib.h> 


char *ft_strjoin(int size, char **strs, char *sep){

    if(size == 0){
         char *arr = malloc(1);
            if (!arr)
                return (NULL);
            arr[0] = '\0';
            return (arr);
    }

    int i = 0; 
    int totalCount = 0;


    while(i < size){
            int j = 0;
            while (strs[i][j]){
                totalCount += 1;
                j++;
            }

            i++;

    }

    int sep_len = 0;

    while (sep[sep_len])
    {
        sep_len++;
    }

    totalCount += (size -1) * sep_len;

    char *result = malloc(sizeof(char) * (totalCount + 1));
    if(!result){
        return (NULL);
    }

    int mainLoop = 0;
    i = 0;

    while(i < size - 1){

        while(strs[i]){
            int j = 0;
            while (strs[i][j]){
                result[mainLoop] = strs[i][j];
                j++;
                mainLoop++;
            }

            int sepIndex = 0;
            while(sep[sepIndex]){
              result[mainLoop] = sep[sepIndex];
              sepIndex++;
              mainLoop++;
            }

            i++;
        }

    }

    result[mainLoop] = '\0';
    return (result);

}



int main (void){

    char *strs[] = {"Hello", "World", "42"};
    char *sep = "-";
    int size = 3;

   char *result =  ft_strjoin(3, strs, sep); 
    return 0;

}