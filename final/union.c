#include <unistd.h>

int main(int argc, char **argv){
    if (argc != 3){
        write(1, "\n",1);
        return (0);
    }

    char matchedString[256] = {0}; 
    int a = 0; 
    int matchCount = 0;
 
    while(argv[1][a]){

        int b = 0; 
        int isMatchFound = 0;

        while (matchedString[b]){
            if (matchedString[b] == argv[1][a]){
                isMatchFound = 1;
            }

            b++;
        }

        if(!isMatchFound){
            matchedString[matchCount] = argv[1][a];
            matchCount += 1;
        }

        a++;

    }


    a = 0;

    while(argv[2][a]){

        int b = 0; 
        int isMatchFound = 0;

        while (matchedString[b]){
            if (matchedString[b] == argv[2][a]){
                isMatchFound = 1;
            }

            b++;
        }

        if(!isMatchFound){
            matchedString[matchCount] = argv[2][a];
            matchCount += 1;
        }

        a++;

    }






    a = 0;
    while(matchedString[a]){
        write(1, &matchedString[a], 1); 
        a++;
    }


        write(1, "\n",1);
        return (0);


}