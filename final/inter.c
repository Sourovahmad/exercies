#include <unistd.h>

int main(int argc, char **argv){
    if (argc != 3){
        write(1, "\n", 1);
        return (0);
    }

    int i = 0;
    char matchedStr[256] = {0};
    int matchCount = 0;

    while(argv[1][i]){
        int b = 0; 
        while(argv[2][b]){
            if(argv[2][b] == argv[1][i]){

                int d = 0; 
                int isAlredyExist = 0;
                while (matchedStr[d]){
                    if(matchedStr[d] == argv[2][b]){
                        isAlredyExist = 1;
                        break; 
                    }
                    d++;
                }
                if(!isAlredyExist){
                    matchedStr[matchCount] = argv[2][b];
                    matchCount += 1;

                }
            }
  
            b++;
        }

        i++;
    }

    i = 0;
    while(matchedStr[i]){
        write(1, &matchedStr[i], 1);
        i++;
    }

   
    write(1, "\n", 1);
    return (0);


}