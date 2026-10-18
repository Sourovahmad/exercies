#include <unistd.h>

int main(int argc, char **argv)
{
    char foundedValue[256];
    int a = 0;
    int foundedCount = 0;

    if (argc != 3)
    {
        write(1, "\n", 1);
        return (0);
    }

    while (argv[1][a])
    {
        char currentChar = argv[1][a];
        int isExist = 0;
        int c = 0;
        int b = 0;

        while (c < foundedCount)
        {
            if (foundedValue[c] == currentChar)
            {
                isExist = 1;
                break;
            }
            c++;
        }

        if (isExist == 0)
        {
            while (argv[2][b])
            {
                if (currentChar == argv[2][b])
                {
                    foundedValue[foundedCount] = currentChar;
                    foundedCount++;
                    break;
                }
                b++;
            }
        }
        a++;
    }

    int d = 0;
    while (d < foundedCount)
    {
        write(1, &foundedValue[d], 1);
        d++;
    }

    write(1, "\n", 1);
    return (0);
}